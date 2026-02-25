#!/bin/bash
#

# Set here the ARM version to download. Check versions here: 
# https://developer.arm.com/downloads/-/arm-gnu-toolchain-downloads
ARM_VERSION=15.2.rel1
ARM_FILENAME=arm-gnu-toolchain-${ARM_VERSION}-x86_64-arch64-none-linux-gnu
BIN_PREFIX=arch64-none-linux-gnu

wget -O  /tmp/${ARM_FILENAME}.tar.xz https://developer.arm.com/-/media/Files/downloads/gnu/${ARM_VERSION}/binrel/${ARM_FILENAME}.tar.xz
curl -o /tmp/${ARM_FILENAME}.tar.xz.sha256asc https://armkeil.blob.core.windows.net/developer/files/downloads/gnu/${ARM_VERSION}/binrel/${ARM_FILENAME}.tar.xz.sha256asc
cd /tmp
sha256sum --check /tmp/${ARM_FILENAME}.tar.xz.sha256asc
echo "# Download ARM toolchain: OK"

[[ -f /usr/bin/${BIN_PREFIX}-gcc ]] && sudo rm /usr/bin/${BIN_PREFIX}-gcc
[[ -f /usr/bin/${BIN_PREFIX}-g++ ]] && sudo rm /usr/bin/${BIN_PREFIX}-g++
[[ -f /usr/bin/${BIN_PREFIX}-gdb ]] && sudo rm /usr/bin/${BIN_PREFIX}-gdb
[[ -f /usr/bin/${BIN_PREFIX}-size ]] && sudo rm /usr/bin/${BIN_PREFIX}-size
[[ -f /usr/bin/${BIN_PREFIX}-objcopy ]] && sudo rm /usr/bin/${BIN_PREFIX}-objcopy
echo "# Remove previous files, if exist: OK"

sudo tar xf /tmp/${ARM_FILENAME}.tar.xz -C /usr/share/
sudo ln -s /usr/share/${ARM_FILENAME}/bin/${BIN_PREFIX}-gcc /usr/bin/${BIN_PREFIX}-gcc
sudo ln -s /usr/share/${ARM_FILENAME}/bin/${BIN_PREFIX}-g++ /usr/bin/${BIN_PREFIX}-g++
sudo ln -s /usr/share/${ARM_FILENAME}/bin/${BIN_PREFIX}-gdb /usr/bin/${BIN_PREFIX}-gdb
sudo ln -s /usr/share/${ARM_FILENAME}/bin/${BIN_PREFIX}-size /usr/bin/${BIN_PREFIX}-size
sudo ln -s /usr/share/${ARM_FILENAME}/bin/${BIN_PREFIX}-objcopy /usr/bin/${BIN_PREFIX}-objcopy
echo "# Install toolchain: OK"

echo "# testing"
${BIN_PREFIX}-gcc --version
${BIN_PREFIX}-g++ --version
${BIN_PREFIX}-gdb --version
${BIN_PREFIX}-size --version
