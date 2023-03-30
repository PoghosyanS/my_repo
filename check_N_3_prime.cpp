#include <iostream>

//find a prime number
bool prime(int number)
{
	if(number == 0 || number == 1 || number < 0)
	{
		return false;
	}
	for (int i = 2;i <= number / 2;i++)
	{
		if (number % i == 0)
		{
			return false;
		}
	}

	return true;

}

//check verification of correct input function
int check()
{

	int num;
	std::cout << "Enter a  integer number: ";
    	//check input number is integer or not and positive or not
    	while(!(std::cin>>num) || (std::cin.peek() != '\n')  || (num < 0))
    	{
        	//clear error flags
        	std::cin.clear();
        	//ignore any remaining characters
        	std::cin.ignore(1000, '\n');
        	std::cout << "Please enter a not negative integer number: ";
    	}

	return num;
}



int main()
{	
	int num;
	int arg = check();
	//print number prime or not
	if (prime(arg))
	{
		std::cout<<"number is a prime"<<std::endl;
	}
	else
	{
		std::cout<<"number is not prime"<<std::endl;
	}

	return 0;
}
