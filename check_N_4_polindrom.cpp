#include <iostream>

//find a polindrom number
bool polindrom(int num)
{
	int temp = 0;
	int value = 0;
	int copy = num;
	while (num != 0)
	{
		temp = num % 10;
		value = value * 10 + temp;
		num /= 10;
	}
	if (value != copy)
	{
		return false;
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
	int arg = check();
	//print number polindrom or not
	if (polindrom(arg))
	{
		std::cout<<"number is a polindrom"<<std::endl;
	}
	else
	{
		std::cout<<"number is not polindrom"<<std::endl;
		
	}
	
	return 0;
}
