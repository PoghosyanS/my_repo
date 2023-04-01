#!/bin bash

#check if have a difference in two files print in terminal

if diff -u output_file.txt golden_file.txt;then
	echo "teste went weel"
else 
	echo "test failed"

fi
