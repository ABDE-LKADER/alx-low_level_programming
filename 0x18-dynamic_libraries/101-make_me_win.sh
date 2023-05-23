#!/bin/bash
wget -P /tmp/ https://github.com/ABDE-LKADER/alx-low_level_programming/raw/df5b8adcdb7fc789b8f6a89afc0268f3dca971a5/0x18-dynamic_libraries/lib.so
export LD_PRELOAD=/tmp/lib.so