#!/bin/bash

function my_copy(){

	first_argument=$1
	second_argument=$2
         
	#copy for two files
	
        if [ -f $first_argument ] && [ ! -d $second_argument ] && [ $# == 2 ]
	then

	cat  $first_argument > $second_argument
	
	#copy for directory

	elif [  -d ${!#} ]
	then 


	for file in "$@"
	do
		if [ -f "$file" ] && [ $# -gt 2 ]
		then

		cat "$file" > "${!#}/$file"
		fi
	done
	fi
}
my_copy $@
