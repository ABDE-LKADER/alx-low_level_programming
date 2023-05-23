#!/bin/bash

# Compile each .c file into object files
gcc -c -fPIC *.c

# Create the dynamic library
gcc -shared -o liball.so *.o

# Cleanup: remove the object files
rm *.o
