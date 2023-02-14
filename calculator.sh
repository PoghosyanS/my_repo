#!/bin/bash
read -p "enter number : " number
read -p "enter a + - * or / : " action
read -p "enter a second number : " number2
if [[ $action == "+" ]]; then
echo  $((number + number2))
elif [[ $action == "-" ]]; then
echo $((number - number2))
elif [[ $action == "*" ]]; then
echo $((number * number2))
elif [[ $action == "/" ]]; then 
echo $((number / number2)) 
fi
