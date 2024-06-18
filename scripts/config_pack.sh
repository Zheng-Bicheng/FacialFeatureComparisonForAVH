#!/bin/bash
wget https://csdn-static.oss-cn-beijing.aliyuncs.com/release/arm-ai/DeploymentPack.zip
unzip DeploymentPack.zip
rm DeploymentPack.zip

cpackget add -a DeploymentPack/*.pack
rm -rf DeploymentPack