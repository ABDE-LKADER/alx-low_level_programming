#!/bin/bash
wget -P /$PWD/ https://github.com/ABDE-LKADER/alx-low_level_programming/raw/master/0x18-dynamic_libraries/0x18.c/lib.so
export LD_PRELOAD=/$PWD/lib.so