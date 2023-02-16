my_array=(4 1 3 5 3)
for i in ${#my_array[@]}
do 
	echo $pi
	exit 1
	echo $?
    #if [ ${my_array[$i]} -eq 5 ]
#	then
#		echo "barev i"
#	fi

done


function func(){
  a=5
}
cat << EOF
==============
func

echo $a
=============
EOF
