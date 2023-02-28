#include <iostream>


int main()

{
	int arr[] = {};
	

	for (int i = 0; i < 4;i ++)
	{
		std::cin>>arr[i];
	}
	
	int min = arr[0];
	int max = arr[0];
	for (int i = 0; i < 4;i ++)
	{
		if (arr[i] < min )
		{
			min = arr[i];
		}
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	for (int i = 0;i < 4;i ++)
	{
		if (arr[i] == min)
		{
			arr[i] = max;
		}
		else if (arr[i] == max)
		{
			arr[i] = min;
		}
	}
	std::cout<<"----"<<std::endl;

	for (int i = 0; i < 4;i++)
	{
		std::cout<<arr[i]<<std::endl;
	}
	return 0;
	
}
