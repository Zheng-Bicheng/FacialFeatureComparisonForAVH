```bash
wget https://paddle-model-ecology.bj.bcebos.com/model/insight-face/mobileface_v1.0_infer.tar
tar -xvf mobileface_v1.0_infer.tar
paddle2onnx --model_dir mobileface_v1.0_infer \
            --model_filename inference.pdmodel \
            --params_filename inference.pdiparams \
            --save_file inference.onnx

python3 -m tvm.driver.tvmc compile --target=cmsis-nn,c \
    --target-cmsis-nn-mcpu=cortex-m55 \
    --target-c-mcpu=cortex-m55 \
    --runtime=crt \
    --executor=aot \
    --executor-aot-interface-api=c \
    --executor-aot-unpacked-api=1 \
    --pass-config tir.usmp.enable=1 \
    --pass-config tir.usmp.algorithm=hill_climb \
    --pass-config tir.disable_storage_rewrite=1 \
    --pass-config tir.disable_vectorize=1 \
    inference.onnx \
    --output-format=mlf \
    --model-format=onnx \
    --input-shapes x:[1,3,112,112] \
    --module-name=face_feature \
    --output=face_feature.tar
rm inference.onnx

mkdir -p "${PWD}/face_feature"
tar -xvf face_feature.tar -C "${PWD}/face_feature"
```