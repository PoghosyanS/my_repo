#!/bin/bash
function tree(){
	path=$1
        local tab=$2
	for file in "$path"/*
	do      #check file or not
		printf "%*s" $((tab *  4))
		if [ -f $file ]
		then 
			echo `basename "$file"`
			
		#check directory or not
		elif [ -d $file ]
		then
			echo `basename "$file"`
                       
			#call recursion function
			tree $file $((tab+1))
		fi
		
	done 

}
tree "$PWD" 0
