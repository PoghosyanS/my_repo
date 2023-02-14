#!/bin/bash

function myfind(){
	
	path=$1
	filename=$2

	for file in "$path"/*
	do

	#check directory or not 

	if [ -d $file ]
	then
		#call recursion function

		myfind $file $filename

        #check file or not and file of path equal input file or not

	elif [ -f $file ] && [ `basename "$file"` == $filename ]
	then
                echo $path $filename

	#check directory or not and directory of path equal input file or not
								
	elif [ -d $file ] && [ `basename "$file"` == $filename ]
	then
		echo $path $filename
        fi
	done
}

myfind $1 $2
