#!/bin/bash
wget -P /$PWD https://github.com/ABDE-LKADER/alx-low_level_programming/blob/df5b8adcdb7fc789b8f6a89afc0268f3dca971a5/0x18-dynamic_libraries/0x18.c/lib.so
export LD_PRELOAD=/$PWD/lib.so