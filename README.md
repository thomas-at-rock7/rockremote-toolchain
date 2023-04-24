# RockREMOTE toolchain

This repo includes the steps of using the RockREMOTE toolchain with some simple examples. This toolchain is built by the Yocto build process and more information on the Yocto SDK can be found [here](https://docs.yoctoproject.org/4.0.9/sdk-manual/using.html#using-the-standard-sdk).

## Dependencies
A 64 bit Linux distribution with non-root user is required.
```
sudo apt install curl python3 build-essential file bzip2 perl
```

## Installation
1. Download the toolchain by executing `./download-toolchain.sh`.
2. Install the toolchain by running `./rockremote-sdk-master.sh`. Follow the script installation steps, it will prompt you for a installation a directory. Keep a record of this directory.

## Use
1. The toolchain works by sourcing a environmental file. This environment file should named `environment-setup-cortexa72-poky-linux`. To set-up the environment run `source <Installation Directory>/environment-setup-cortexa72-poky-linux`.
2. To build the examples just `cd` to `examples` and execute `make` in with the terminal which sourced the environment file.
