#include <iostream>

class Human
{
	private:
		int age;
		std::string name;
	public:
		static int count;
		Human()
		{
		}
		Human(int value_age,std::string value_name)
		{
			age = value_age;
			name = value_name; 
			count++;
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

int Human::count = 0;
		

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
	
	//Human a1(98,"leo");
	Human a1(99,"Smith");
	Human a2(32,"John");
	Human a3(45,"Adam");
	Human a4(23,"Seul");
	Human a5(11,"Anny");
	Human *arr = new Human[a1.count]{a1,a2,a3,a4,a5};





	

	sorting(arr,Human::count);
	for (int i = 0;i < Human::count;i++)
	{
		arr[i].print();
	}
	
	delete [] arr;

	return 0;
}
