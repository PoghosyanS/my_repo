#!/bin/bash

function my_move(){

	first_argument=$1
	second_argument=$2

	#rename file name

	if [ $# == 2 ] && [ -f $first_argument ] 
	then 
		if [ -f $second_argument ]
		then
			 
			rm $second_argument
		fi
		
		if [ -d $second_argument ]
		then
			ln "$first_argument" "$second_argument" 2>/dev/null || cat "$first_argument" > "$second_argument/$(basename "$first_argument")"
	                   
		else
			ln "$first_argument" "$second_argument" 2>/dev/null || cat "$first_argument" > "$second_argument"
			
		fi

		
		rm $first_argument


        #move a file to directory
	elif [ -d $first_argument ]  && [ $# == 2 ] 
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
	  rm -r $first_argument


	elif [ "$#" -gt 2 ] && [ -d ${!#} ]  
	then
		for file in "$@"
		do
			
			if [ -f $file ]  
			then
				ln $file ${!#}
				rm $file 
			fi
		done
	else 
		cp "$first_argument"  "$second_argument"

	fi



}

my_move $@
