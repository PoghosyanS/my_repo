#!/bin/bash

#read -p "enter a simbol : " var
#
#case $var in
#Monday)
#echo "it is monday"
#;;
#esac

#declare -i var=0
#while [[ $var -lt 10  ]]
#do
#      echo $var
#      var+=1
#done

read -p "enter apath  " file_path

while IFS=: read f1 f2
do
echo $f1
done < "$file_path"


