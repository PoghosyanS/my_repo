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
			
		bool operator>(const Human& other)
		{
			return this->age > other.age;
		}

		void print()
		{
			std::cout<< name<<std::endl;
		}
};
		

void sorting(Human arr[],int size)
{	
	
	for (int i = 0;i < size - 1;i++)
	{
		for (int j = 0; j < size  - i - 1;j++)
		{
			if (arr[j] > arr[j + 1])
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
	
	int size = 5;

	Human *arr = new Human[size]{

	Human(99,"Smith"),
	Human(32,"John"),
	Human(45,"Adam"),
	Human(23,"Seul"),
	Human(11,"Anny")};

	sorting(arr,size);
	for (int i = 0;i < size;i++)
	{
		arr[i].print();
	}
	
	delete [] arr;

	return 0;
}
