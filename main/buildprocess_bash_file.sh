#!/bin/bash

#commands main.cpp build process steps
g++ -E main.cpp -o main.ii -I ./shape/headers/
g++ -S main.ii -o main.s -I ./shape/headers/
g++ -c main.s -o main.o -I ./shape/headers/

#commands binary.cpp build process steps
g++ -E ./shape/src/binary.cpp  -o ./shape/build/binary.ii -I ./shape/headers
g++ -S ./shape/build/binary.ii  -o ./shape/build/binary.s -I ./shape/headers
g++ -c ./shape/build/binary.s  -o ./shape/build/binary.o -I ./shape/headers

#command creat executable file from two object files

g++ ./main.o ./shape/build/binary.o  -o binary_file
