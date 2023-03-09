#include <iostream>
#include "binary.h"

void  bin(int num)
{	
	int arr[32];
	int temp = 0;
	int i = 0;
	while (num != 0)
	{
		arr[i] = num % 2;
		num /= 2;
		i ++;

	}
	for (int j = i -1;j >= 0;j--)
	{

		std::cout<<arr[j]<<std::endl;
	}


}
