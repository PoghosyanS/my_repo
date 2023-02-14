#!/bin/bash
function delete_line(){
	argument=$1
	while read var; 
	do
	#creat a temporary file 
	if [ -n "$var" ]; then 
		echo "$var" >> newfile
	fi
	done < $argument
	cat newfile > $argument
	#remove temporary file
	rm newfile
}

delete_line $1




