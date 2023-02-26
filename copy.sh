#!/bin/bash

function my_copy(){

	first_argument=$1
	second_argument=$2
         
	#copy for two files
	
        if [ -f $first_argument ] && [ ! -d $second_argument ] && [ $# == 2 ]
	then

	cat  $first_argument > $second_argument
	
	#copy files in directory directory

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

	#copy directories in directory
	if [ -d $first_argument ]
	then    

		#check first directory is empty or not
	        if [ -z "$(ls -A "$first_argument")" ]
		then
			mkdir -p "$second_argument/$(basename "$first_argument")"
		
		else
			mkdir -p "$second_argument/$(basename "$first_argument")"

		
		for myfile in "$first_argument"/*
		do
			if [ -d "$myfile" ]
			then    
				#call recursion function 
				my_copy "$myfile" "$second_argument/$(basename "$myfile")"
			elif [ -f $myfile ]
			then
				
	                       cat  $myfile > $second_argument/$myfile

			fi
	
		done
		fi
				
		else 
			cp "$first_argument"  "$second_argument"

	  
	fi	
}
my_copy $@
