#!/bin/bash
cp /bin/ls /tmp/evil_ls
echo "int system(const char *command) { return 0; }" > /tmp/evil_lib.c
gcc -shared -o /tmp/evil_lib.so /tmp/evil_lib.c
export LD_PRELOAD=/tmp/evil_lib.so
