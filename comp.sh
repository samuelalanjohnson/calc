#!/bin/env sh
# little shell script to compile the program forgot how to use make lolz
gcc -std=c99 -c -g ./src/*.c

gcc -std=c99 ./*.o -o calc

rm -rf ./*.o
