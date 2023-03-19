#include <iostream>

int prime(int num)
{
	if (num == 0 || num == 1)
	{
		return false;
	}
	for (int i = 2;i <= num /2;i++)
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
	int num;
	int N;
	std::cout<<"enter a number :"<<std::endl;
	std::cin>>num;
	if (prime(num))
	{
		std::cout<<num<<"  number is prime"<<std::endl;
	}
	else
	{
		std::cout<<"number is not prime"<<std::endl;
		
	}
	std::cout<<"enter a N number"<<std::endl;
	std::cin>>N;
	for (int i = 2;i <= N;i++)
	{
		if (prime(i))
		{
			std::cout<<i<<"  number is prime : "<<std::endl;
		}
	}

	return 0;
}
