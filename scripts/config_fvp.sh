#!/bin/bash

wget https://artifacts.tools.arm.com/avh/11.26.11/avh-linux-aarch64_11.26_11_Linux64_armv8l.tgz
tar -xvf avh-linux-aarch64_11.26_11_Linux64_armv8l.tgz
rm -rf avh-linux-aarch64_11.26_11_Linux64_armv8l.tgz
cp -r avh-linux-aarch64/bin/* /opt/VHT/bin/
rm -rf avh-linux-aarch64

FVP_Corstone_SSE-300 --version