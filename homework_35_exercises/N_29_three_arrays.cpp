#include <iostream>

void make_arr_one(int arr_1[],int size)
{
	for(int i = 0;i < size;i++)
	{
		std::cin>>arr_1[i];
	}
		
}
void make_arr_two(int arr_2[],int size)
{

	for (int j = 0;j < size;j++)
	{
		std::cin>>arr_2[j];
	}
		
}

int divisors(int num1,int num2)
{	
	int value = 0;
	while (num2 != 0)
	{
		value = num1 % num2;
		num1 = num2;
		num2 = value;
	}
	return num1;
}

void arr_func(int arr1[],int arr2[],int arr3[],int size)
{
	for (int i = 0;i < size;i++)
	{
		arr3[i] = divisors(arr1[i],arr2[i]);
	}
}




int main()
{	int size;
	std::cout<<"enter a size "<<std::endl;
	std::cin>>size;
	int arr1[size];
	int arr2[size];
	int arr3[size];
	std::cout<<"enter a arr1 elements"<<std::endl;
	make_arr_one(arr1,size);
	std::cout<<"enter a arr2 elements"<<std::endl;
	make_arr_two(arr2,size);
	arr_func(arr1,arr2,arr3,size);
	std::cout<<"arr3 elements"<<std::endl;
	for (int i = 0;i < size;i++)
	{
		std::cout<<arr3[i]<<'\t';
	}
	std::cout<<std::endl;
	return 0;
}
