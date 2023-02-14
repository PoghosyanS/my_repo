#!/bin bash

function tree(){
	var="$2"
	dir="$1"
	path=`ls`
	for file in $path
	do
		if [[ -d $file ]]
		then
		echo "$var" "$(basname "$file")"
		tree "$file" "$var"
		else
                     echo "$var"  "$(basname "$file")"
                
		fi
	done

}
tree $1 ""
