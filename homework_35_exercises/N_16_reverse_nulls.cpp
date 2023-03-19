#include <iostream>

int main()
{
	int num;
	int temp = 0;
	int value = 0;
	std::cout<<"enter a number"<<std::endl;
	std::cin>>num;
	while (num != 0)
	{
		temp = num % 10;
		value = value * 100 + temp * 10;
		num /= 10;
	}
	std::cout<<value<<std::endl;
	
	
	return 0;
}
