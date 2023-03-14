#include <iostream>

struct Human
{
	std::string name;
	int age;



};



int main()
{
	std::cout<<"enter a array size : "<<std::endl;
	int size;
	std::cin>>size;
	std::string old_name;
	int old_age = 0;
	Human *arr = new Human[size];

	for (int i = 0; i < size;i++)
	{
		std::cout<<"enter a Human name : ";
		std::cin>>arr[i].name;
		std::cout<<"enter a Human age : " ;
		std::cin>>arr[i].age;

		
	}
	std::cout<<std::endl;
	int max_age = arr[0].age;

	for (int i = 0;i < size;i++)
	{
		if (arr[i].age > max_age)
		{
			max_age = arr[i].age;
			old_name = arr[i].name;
			old_age = arr[i].age;
		}

	}
	std::cout<<"oldest age is a "<<old_age<<"  name : "<<old_name<<std::endl;

	return 0;
}
