#include <iostream>

//input string function
std::string input()
{
	
	std::string str;
	std::cout<<"enter a integer positive number"<<std::endl;
	std::cin>>str;
	return str;
}

//check verification of correct input function
int check(std::string str)
{
        int num;
        while (true)
        {
                try
                {
                        num = std::stoi(str);
                }
                catch(...)
                {
                        std::cout<<"please enter a number"<<std::endl;
                        std::cin>>str;
                        continue;

                }
        	return num;

        }
}
//number reverse function
int reverse(int number)
{
	int temp = 0;
	int value = 0;
	while(number != 0)
	{

		temp = number % 10;
		value = value * 10 + temp;
		number /= 10;
	}
	return value;
}


int main()
{
	std::string str = input();
	int arg = check(str);
	std::cout<<reverse(arg)<<std::endl;

	return 0;
}
