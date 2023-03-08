#include <iostream>

int main()
{ 
	int sum = 0;
    	int num;
    	while (true) 
	{
        	std::cout << "Enter a number : ";
        	if (!(std::cin >> num)) 	
		{ 
            		std::cout << "Error input" << std::endl;
            		break;
        	}
        	else if (num == 0) 
		{
            		break; 
        	}
		else
		{
        	sum += num;
		}
    	}
    		std::cout << "Sum of integers: " << sum << std::endl;
	return 0;
}

