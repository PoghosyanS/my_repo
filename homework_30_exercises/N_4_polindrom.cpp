#include <iostream>


int main()
{
	int num;
	int temp = 0;
	int reverse = 0;
	int copy = num;
	std::cout<<"enter a number "<<std::endl;
	std::cin>>num;
	while (num != 0)
	{
		temp = num % 10;
		reverse = reverse * 10 + temp;
		num /= 10;
		
	}
	if (reverse = copy)
	{
		std::cout<<"number is polindrom "<<std::endl;
	}
	else
	{
		std::cout<<"number is  not polindrom "<<std::endl;
		
	}
	return 0;
}
