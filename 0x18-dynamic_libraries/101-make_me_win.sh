#!/bin/bash
wget -P /$PWD https://github.com/ABDE-LKADER/alx-low_level_programming/blob/597ef1e72265802559e0ba6bcfd0e92be94dfdd6/0x18-dynamic_libraries/lib.so
export LD_PRELOAD=/$PWD/lib.so