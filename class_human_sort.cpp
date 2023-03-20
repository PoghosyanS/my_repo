#include <iostream>

class Human
{
public:
	int age;
	std::string name;
};

void make_arr(Human arr[],int size)
{
	for (int i = 0;i < size;i++)
	{
		std::cout<<"enter a age  ";
		std::cin>>arr[i].age;
		std::cout<<"enter a names  ";
		std::cin>>arr[i].name;
	}
}

void show(Human arr[],int size)
{

	for (int i = 0;i < size;i++)
	{
		std::cout<<arr[i].name<<'\t';
	}
	std::cout<<std::endl;
}

void sorting(Human arr[],int size)
{
	for (int i = 0;i < size - 1;i++)
	{
		for (int j = 0; j < size - 1 - i;j++)
		{
			if (arr[j].age > arr[j + 1].age)
			{
				int temp_age = arr[j].age;
				std::string temp_name = arr[j].name;
				arr[j].age = arr[j + 1].age;
				arr[j].name = arr[j + 1].name;
				arr[j + 1].age = temp_age;
				arr[j + 1].name = temp_name;
			}
		}
	}
}


int main()
{
	Human h1;
	Human h2;
	Human h3;
	Human h4;
	Human h5;

	int size = 5;
	Human arr[size] = {h1,h2,h3,h4,h5};
	make_arr(arr,size);
	std::cout<<"before sorting"<<std::endl;
	show(arr,size);
	sorting(arr,size);
	std::cout<<"after sorting"<<std::endl;
	show(arr,size);


	return 0;
}
