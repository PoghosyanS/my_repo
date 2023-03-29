#include <iostream>
#include <cassert>

int main()
{
    int num = 0;
    int temp = 0;
    int sum = 0;

    std::cout << "Enter a  integer number: ";
    //check input number is integer or not
    while(!(std::cin>>num) || (std::cin.peek() != '\n') || (num < 0))
    {	
    	//clear error flags
        std::cin.clear();
	//ignore any remaining characters
        std::cin.ignore(1000, '\n');
        std::cout << "Please enter a not negative integer number: ";
    }

    //additional verification
    assert(num >= 0);

    while(num != 0)
    {
        temp = num % 10;
        sum += temp;
        num /= 10;
    }

    std::cout << "Sum of digits = " << sum << std::endl;
    return 0;
}

