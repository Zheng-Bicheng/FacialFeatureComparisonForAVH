#!/bin/bash

wget https://csdn-static.oss-cn-beijing.aliyuncs.com/release/arm-ai/avh-linux-aarch64_11.26_11_Linux64_armv8l.tgz
tar -xvf avh-linux-aarch64_11.26_11_Linux64_armv8l.tgz
rm -rf avh-linux-aarch64_11.26_11_Linux64_armv8l.tgz
cp -r avh-linux-aarch64/bin/* /opt/VHT/bin/
rm -rf avh-linux-aarch64

/opt/VHT/bin/FVP_Corstone_SSE-300 --version