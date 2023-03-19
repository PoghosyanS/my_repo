#include <iostream>

void nake_arr(int arr[],int size)
{	
	std::cout<<"enter a elenents"<<std::endl;
	for (int i = 0;i < size;i++)
	{
		std::cin>>arr[i];
	}
}

void show(int arr[],int size)
{	
	for (int i = 0;i < size;i++)
	{
		std::cout<<arr[i]<<'\t';
	}
	std::cout<<std::endl;
}	

void delete_element(int arr[],int *size,int m)
{	
	
	for (int i = m - 1;i < *size - 1;i++)
	{
		arr[i] = arr[i + 1];
	}
	(*size)--;
}

int main()
{
	int size = 5;
	int m;
	std::cout<<"enter a delete index"<<std::endl;
	std::cin>>m;
	int arr[size];
	nake_arr(arr,size);
	show(arr,size);
	delete_element(arr,&size,m);
	show(arr,size);

	return 0;
}
