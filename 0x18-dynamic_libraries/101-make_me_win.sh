#!/bin/bash
echo 'int rand() { return 42; }' > /tmp/custom_lib.c
gcc -shared -fPIC /tmp/custom_lib.c -o /tmp/custom_lib.so
export LD_PRELOAD=/tmp/custom_lib.so
