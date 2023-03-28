#include <iostream>


int func(){
	int sum = 0;
    	int num;
	bool word = false;
    	while (true) 
	{
        	std::cout << "Enter a number : ";
        	if (!(std::cin >> num)) 	
		{ 
            		std::cout << "Error input" << std::endl;
            		return false;
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
	return true;
}

int main()
{ 	
	func();
	

	return 0;
}

