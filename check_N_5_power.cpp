#include <iostream>

//check number is power of 2 or not
int power(int num)
{	
	if (num == 0)
	{
		return false;
	}
	while (num % 2 == 0)
	{
		num /= 2;
	}
	return num == 1;

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
	//print number power of 2 or not
	if (power(arg))
	{
		std::cout<<"number is power of 2"<<std::endl;
	}
	else
	{
		std::cout<<"number is not  power of 2"<<std::endl;
		
	}

	return 0;
}
