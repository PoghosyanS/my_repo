#include <iostream>

class Human
{
	private:
		int age;
		std::string name;
	public:
		Human()
		{

		}
		Human(int value_age,std::string value_name)
		{
			age = value_age;
			name = value_name; 
		}
		int get_age()
		{
			return age;
		}
		std::string get_name()
		{
			return name;
		}
};


void show(Human arr[],int size)
{

	for (int i = 0;i < size;i++)
	{
		std::cout<<arr[i].get_name()<<'\t';
	}
	std::cout<<std::endl;
}


void sorting(Human arr[],int size)
{
	for (int i = 0;i < size - 1;i++)
	{
		for (int j = 0; j < size  - i - 1;j++)
		{
			if (arr[j].get_age() > arr[j + 1].get_age())
			{	

				Human temp_age = arr[j];
				arr[j] = arr[j + 1] ;
				arr[j + 1]  = temp_age;
			}
		}
	}
}


int main()
{	
	
	Human h1(99,"Smith");
	Human h2(32,"John");
	Human h3(45,"Adam");
	Human h4(23,"Seul");
	Human h5(11,"Anny");

	int size = 5;

	Human *arr = new Human[size]{h1,h2,h3,h4,h5};
	std::cout<<"before sorting"<<std::endl;
	show(arr,size);
	sorting(arr,size);
	std::cout<<"after sorting"<<std::endl;
	show(arr,size);
	
	delete [] arr;

	return 0;
}
