#!/bin/bash
gcc -c *.c -fpic
ar rc liball.a *.o
ranlib liball.a
