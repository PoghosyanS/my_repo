#include <iostream>

int fibonacci(int num)
{
	int number_1 = 0;
	int number_2 = 1;
	int temp = 0;
	for (int i = 2;i< num + 1;i++)
	{
		temp = number_1 + number_2;
		number_1 =  number_2;
		number_2 = temp;
	}

	return temp;


}


int main()
{
	int number;
	std::cout<<"enter a number :"<<std::endl;
	std::cin>>number;
	int my_func = fibonacci(number);
	std::cout<<my_func<<std::endl;


	return 0;
}
