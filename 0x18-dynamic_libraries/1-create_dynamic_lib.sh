#!/bin/bash
gcc -Wall -Wextra -pedantic -c -fPIC *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LIBRARY_PATH
