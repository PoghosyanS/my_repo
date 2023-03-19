#include <iostream>


void long_char(char arr[],int size)
{
	int maximum_len = 0;
	char char_max = arr[0];
	int current = 0;
	char my_char = arr[0];

	for (int i = 0;i < size;i++)
	{
		if (my_char == arr[i])
		{
			current++;
		}
		else
		{
			if (current > maximum_len)
			{
				maximum_len = current;
				char_max = my_char;
			}
			my_char = arr[i];
			current = 0;
		}
	}
	if (current > maximum_len)
	{
		maximum_len = current;
		char_max = my_char;

	}
	std::cout<<"longest simbol is  : "<<char_max<<std::endl;
}

int main()
{
	char arr[] = {'a','b','c','d','d','d','e','e'};
	int size = sizeof(arr) / sizeof(char);
	long_char(arr,size);
	
	return 0;
}
