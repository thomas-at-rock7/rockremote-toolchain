#! /bin/bash

TOOLCHAIN_URI=https://firmware.rockremote.io/main/alpha/master
TOOLCHAIN_FILE=rockremote-sdk-master.sh
curl $TOOLCHAIN_URI/$TOOLCHAIN_FILE -o $TOOLCHAIN_FILE
chmod +x $TOOLCHAIN_FILE

