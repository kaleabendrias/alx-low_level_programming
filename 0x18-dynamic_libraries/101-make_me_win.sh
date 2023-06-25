#!/bin/bash
wget -P /tmp https://github.com/kaleabendrias/alx-low_level_programming/blob/fdd134aa1bac56b8106973d941cc69afcffdf84e/0x18-dynamic_libraries/libtest.so
export LD_PRELOAD=/tmp/libtest.so
