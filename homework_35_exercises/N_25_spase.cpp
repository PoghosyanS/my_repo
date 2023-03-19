#include <iostream>

void make_arr(int arr[],int size)
{
	for(int i = 0;i < size;i++)
	{
		std::cin>>arr[i];
	}

}


void print(int arr[],int size)
{
	for(int i = 0;i < size; i++)
	{
		std::cout<<arr[i]<<'\t';
	}
	std::cout<<std::endl;
}

void spase(int arr[],int size,const int count)
{
	int newarr[count];
	for (int i = 0;i < count;i++)
	{
		newarr[i] = arr[size - count + i];
	}
	for(int i = size - count - 1;i >= 0;i--)
	{
		arr[i + count] = arr[i];
	}
	for (int i = 0;i < count;i++)
	{
		arr[i] = newarr[i];
	}


}



int main()
{
	int size;
	const int count = 4;
	std::cout<<"enter a size"<<std::endl;
	std::cin>>size;
	int arr[size];
	std::cout<<"enter a array elements"<<std::endl;
	make_arr(arr,size);
	print(arr,size);
	spase(arr,size,count);
	print(arr,size);




	return 0;
}
