#include <iostream>

int largestdigit_index(int num)
{
	int largestdigit = 0;
	int largestindex = 0;
	int index = 0;
	while (num != 0)
	{
		int mydigit = num % 10;
		if (mydigit >= largestdigit)
		{
			largestdigit = mydigit;
			largestindex = index;
		}
		num /= 10;
		index++;
	}
	int digit = index;
	int reverse = digit - largestindex - 1;
	return reverse;
}

int count_prime_divisors(int num)
{
	int count = 0;
	while (num % 2 == 0)
	{
		count++;
		num /= 2;
	}
	
	for (int i = 3;i * i <= num;i += 2)
	{

		while (num % i == 0)
		{
			count++;
			num /= i;
		}
	}
	if (num > 2)
	{
		count++;
	}
	return count;

}

int count_zeros(int num)
{
	std::string str = "";
	int count = 0;
	while (num != 0)
	{
		int dig = num % 16;
		str = std::to_string(dig) + str;
		num /= 16;
	}
	for (int i = 0;i < str.length();i++)
	{
		if (str[i] == '0')
		{
			count++;
		}
	}

	return count;

}





int main()
{
	int largest_digit;
	int prime_divisors;
	int countzeros;
	std::cout<<"enter a number "<<std::endl;
	std::cin>>largest_digit;
	std::cout<<"largest digit index "<<largestdigit_index(largest_digit)<<std::endl;
	std::cout<<"enter a number "<<std::endl;
	std::cin>>prime_divisors;
	std::cout<<"count of prime divisors "<<count_prime_divisors(prime_divisors)<<std::endl;
	std::cout<<"enter a number "<<std::endl;
	std::cin>>countzeros;
	std::cout<<"count of zeros "<<count_zeros(countzeros)<<std::endl;
	

	return 0;
}
