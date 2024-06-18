#!/bin/bash

# This script only supports Linux operating systems (x86_64/aarch64)
OS=$(uname -s)
if [ "$OS" != "Linux" ]; then
   echo "The system only supports (Linux), but the current system is $OS."
   exit 1
fi

echo 'export PATH=/home/ubuntu/.local/bin:$PATH' >> ~/.bashrc
source ~/.bashrc

# Install paddlepaddle/paddle2onnx using pip
# https://www.paddlepaddle.org.cn/whl/linux/cpu-mkl/develop.html
ARCH=$(uname -m)
if [[ "$ARCH" == "x86_64" ]]; then
  paddlepaddle_whl_name="paddlepaddle-0.0.0-cp38-cp38-linux_x86_64.whl"
elif [[ "$ARCH" == "arm"* || "$ARCH" == "aarch64" ]]; then
  paddlepaddle_whl_name="paddlepaddle-0.0.0-cp38-cp38-linux_aarch64.whl"
else
    echo "When the operating system is Linux, the system architecture only supports (x86_64 and aarch64), but the current architecture is $ARCH."
    exit 1
fi
paddlepaddle_whl_url="https://paddle-wheel.bj.bcebos.com/develop/linux/linux-cpu-mkl-avx/$paddlepaddle_whl_name"
wget $paddlepaddle_whl_url
pip install -i https://pypi.tuna.tsinghua.edu.cn/simple $paddlepaddle_whl_name paddle2onnx

# Install apache-tvm/onnx using pip
pip install -i https://pypi.tuna.tsinghua.edu.cn/simple apache-tvm onnx

# Install opencv-python using pip
pip install -i https://pypi.tuna.tsinghua.edu.cn/simple opencv-python