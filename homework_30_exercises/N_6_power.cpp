#include <iostream>

int pow(int num)
{
	if (num == 0)
	{
		return false;
	}
	while (num % 2 == 0)
	{
		num /= 2;
	}
	
	return num == 1;

}

int main()
{
	int num;
	std::cout<<"enter a number :"<<std::endl;
	std::cin>>num;
	if (pow(num))
	{
		std::cout<<"number is power to 2 :"<<std::endl;
	}
	else
	{
		std::cout<<"number is not power to 2 :"<<std::endl;

		
	}
		
	
	
	return 0;
}

