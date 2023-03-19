#include <iostream>

void make_arr(int *arr,int size)	
{	
	std::cout<<"enter a elements"<<std::endl;
	for(int i = 0;i < size;i++)
	{
		std::cin>>arr[i];
	}
}

void show(int *arr,int size)
{
	for (int i = 0; i < size;i++)
	{
		std::cout<<arr[i]<<'\t';
	}
	std::cout<<std::endl;
}

void bable_sort(int *arr,int size)
{	
	int temp = 0;
	for(int i = 0; i < size - 1;i++)
	{
		for (int j = 0;j < size - i - 1 ;j ++)
		{
			if ( arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}


int main()
{
	int size;
	std::cout<<"enter a size"<<std::endl;
	std::cin>>size;
	int *arr = new int[size];
	make_arr(arr,size);
	bable_sort(arr,size);
	show(arr,size);

	delete [] arr;	
	return 0;
}
