#include <iostream>

void make_arr(int arr[],int size)
{
	for(int i = 0;i< size;i++)
	{
		std::cin>>arr[i];
	}
}

int binarysearch(int arr[],int size, int num)
{
	int left = 0;
	int right = size - 1;
	while (left <= right)
	{
		int middle = left + (right - left) /2;
		if (arr[middle] == num)
		{
			return middle;
		}
		else if (arr[middle] < num)
		{
			left = middle + 1;

		}	
		else
		{
			right = middle - 1;
		}
		
	}
	return -1;
}


int main()
{
	int size;
	int num;
	std::cout<<"enter a size :"<<std::endl;
	std::cin>>size;
	int arr[size];
	std::cout<<"enter a number  :"<<std::endl;
	std::cin>>num;
	std::cout<<"enter a array numbers"<<std::endl;
	make_arr(arr,size);
	std::cout<<binarysearch(arr,size,num)<<std::endl;;


	return 0;
}
