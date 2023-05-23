#!/bin/bash
wget -P /$PWD https://github.com/lib.so
export LD_PRELOAD=/$PWD/lib.so