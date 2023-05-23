#!/bin/bash
wget -P https://raw.github.com/Pericles001/alx-low_level_programming/master/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD=/$PWD/lib.so
