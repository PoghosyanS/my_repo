#include <iostream>

int main()
{
	int arr[] = {4,8,2,99,23};
	int maxindex = 0;
	int max = arr[0];
	for (int i = 0;i < 5; i ++)
	{
		if (arr[i] > max )
		{
			max = arr[i];
		}
		if (max == arr[i])
		{
			 maxindex = i;
					
		}
	}

	for (int i = maxindex;i < 5 - 1; i ++)
	{
		arr[i] = arr[i + 1];
	}
	for (int i = 0;i < 5; i ++)
	{
		std::cout<<arr[i]<<std::endl;
	}
	return 0;
}
