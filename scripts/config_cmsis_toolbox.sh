#!/bin/bash

# This script only supports Linux operating systems (x86_64/aarch64)
OS=$(uname -s)
if [ "$OS" != "Linux" ]; then
   echo "The system only supports (Linux), but the current system is $OS."
   exit 1
fi

# Download cmsis-toolbox(v2.4.0)
ARCH=$(uname -m)
if [[ "$ARCH" == "x86_64" ]]; then
  cmsis_toolbox_name="cmsis-toolbox-linux-amd64"
elif [[ "$ARCH" == "arm"* || "$ARCH" == "aarch64" ]]; then
  cmsis_toolbox_name="cmsis-toolbox-linux-arm64"
else
  echo "When the operating system is Linux, the system architecture only supports (x86_64 and aarch64), but the current architecture is $ARCH."
  exit 1
fi
cmsis_toolbox_version="2.4.0"
cmsis_toolbox_url="https://github.com/Open-CMSIS-Pack/cmsis-toolbox/releases/download/${cmsis_toolbox_version}/${cmsis_toolbox_name}.tar.gz"
wget ${cmsis_toolbox_url}
tar -vxf ${cmsis_toolbox_name}.tar.gz
rm ${cmsis_toolbox_name}.tar.gz

# copy to opt
mv ${cmsis_toolbox_name} ctools
rm -rf /opt/ctools
mv ctools /opt