#include <iostream>

int  simple(int num)
{
	if (num == 0 || num == 1)
	{
		return false;
	}
	for (int i = 2;i <= num /2 ;i++)
	{
		if (num % i == 0)
		{
			return false;
		}
	
	}
	return true;
}

int main()
{
	int number;
	std::cout<<"enter a number :"<<std::endl;
	std::cin>>number;
	if (simple(number))
	{

		std::cout<<"number is simple"<<std::endl;
	}
	else
	{
		std::cout<<"number is not simple"<<std::endl;

		
	}
		
	return 0;
}
