#include <iostream>

bool simple(int num)
{
	if (num < 2)
	{
		return 2;
	}
	for (int i = 2; i <= num /2;i++)
	{

		if (num % i == 0)
		{
			return false;
		}
	}
	
	return true;

}

int large_simple(int num)
{
	int large = num + 1;
	while (true)
	{
		if (simple(large))
		{
			return large;
		}
	
		large ++;

	}

}


int main()
{
	int number;
	std::cout<<"enter a number : "<<std::endl;
	std::cin>>number;
	std::cout<<large_simple(number)<<std::endl;
	return 0;
}
