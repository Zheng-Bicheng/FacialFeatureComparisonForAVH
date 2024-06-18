#!/bin/bash
mkdir -p ${CMSIS_PACK_ROOT}
cpackget init --pack-root ${CMSIS_PACK_ROOT} https://www.keil.com/pack/index.pidx
wget https://csdn-static.oss-cn-beijing.aliyuncs.com/release/arm-ai/DeploymentPack.zip
unzip DeploymentPack.zip
cpackget add -a DeploymentPack/*.pack