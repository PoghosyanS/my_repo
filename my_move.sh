#!/bin/bash

function my_move(){

	first_file=$1
	second_file=$2

	#rename file name

	if [ $# == 2 ] && [ -f $first_file ] 
	then
		if [ -f $second_file ]
		then
			rm $second_file
					
			
		fi
			ln $first_file $second_file
			rm $first_file


        #move a file to directory

	elif [ $# -gt 2 ] && [ -d ${!#} ]
	then
		for file in "$@"
		do
			
			if [ -f $file ]
			then
				ln $file ${!#}
				rm $file 
			fi
		done

	fi

}

my_move $1 $2
