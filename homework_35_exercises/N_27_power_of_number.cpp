#include <iostream>

int power(int n,int k)
{
	if ( n <= 0)
	{
		return false;
	}
	while (n % k == 0)
	{
		n /= k;
	}

	return n == 1;



}

int main()
{
	int number;
	int value;
	std::cout<<"enter a number N"<<std::endl;
	std::cin>>number;
	std::cout<<"enter a number K"<<std::endl;
	std::cin>>value;
	std::cout<<power(number,value)<<std::endl;

	return 0;
}
