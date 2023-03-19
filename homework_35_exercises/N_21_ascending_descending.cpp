#include <iostream>

bool ascending(int arr[],int size)
{	
	for (int i = 1;i < size; i++)
	{
		if (arr[i] < arr[i - 1])
		{
			return false;
		}
	}
	return true;

}

bool descending(int arr[],int size)
{	
	for (int i = 1;i < size; i++)
	{
		if (arr[i] > arr[i - 1])
		{
			return false;
		}
	}
	return true;

}


int main()
{
	int size = 5;
	int arr[size] = {};
	std::cout<<"enter a numbers : "<<std::endl;
	for (int i = 0;i < size;i++)
	{
		std::cin>>arr[i];
	}
	if (ascending(arr,size))
	{
		std::cout<<"yes numbers is sorted ascending"<<std::endl;
	}
	else if (descending(arr,size))
	{
		std::cout<<"yes numbers is sorted descending"<<std::endl;
	}
	else
	{
		std::cout<<"numbers not sorted"<<std::endl;
	}
	return 0;
}
