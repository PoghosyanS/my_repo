#include <iostream>

int main()
{
	int num;
	while(true)
	{
		std::cout<<"enter a threedigit numbers : "<<std::endl;
		std::cin>>num;
		if (num == 0)
		{
			break;
		}
		else
		{
			int temp_one = 0;
			int copy = num;
			while (num > 0)
			{
				int mydigit = num % 10;
				temp_one = temp_one * 10 + mydigit;
				num /= 10;

			}
			if (copy == temp_one)
			{
				std::cout<<"number is a polindrom : "<<std::endl;
			}

			else
			{
				std::cout<<"number is not polindrom : "<<std::endl;
				
			}
		}
	}
	return 0;
}
