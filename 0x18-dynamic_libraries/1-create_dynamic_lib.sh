#!/bin/bash
gcc -fpic -o *.c
gcc -shared *.o -o liball.so
