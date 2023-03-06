#include <iostream>

int simple(int num)
{
	if (num == 0 || num == 1)
	{
		return false;

	}
	for (int i = 2;i <= num / 2;i++)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}

int near_simple(int num)
{
	int up = num + 1;
	int down = num - 1;
	while(true)
	{
		if (simple(up))
		{
			return up;
		}
		if (simple(down))
		{
			return down;
		}
		down --;
		up ++;
	}
}



int main()
{
	int number;
	std::cout<<"enter a number : "<<std::endl;
	std::cin>>number;
	std::cout<<near_simple(number)<<std::endl;


	return 0;
}
