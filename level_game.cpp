#include <iostream>
#include <ctime>

int main() 
{
	srand(time(NULL)); 
        int level = 10; 
        while (true) 
	{
        	int random_number = rand() % (level * 10 - level + 1) + level;
        	int enter_number;
        	int count = 0;
        	std::cout << "enter a number : "<<std::endl;
		std::cout <<level<< "--"<<level*10-1  << std::endl;
        	bool enter_correct = false;
        	while (!enter_correct) 
		{
            		std::cin >> enter_number;
            		count++;
            		if (enter_number < random_number) 
			{
                		std::cout << "number is low!" << std::endl;
            		} 
			else if (enter_number > random_number) 
			{
                		std::cout << "number is high!" << std::endl;
            		} 
			else 
			{
                		std::cout << "you find number"<< std::endl;
                		enter_correct = true;
            		}
        		}
			if (level == 10) 
			{
            			level = 100; 
        		} 
			else if (level == 100) 
			{
            			level = 1000;
        		}
        		else
			{
            			break; 
        		}  
			
			std::cout<<"find in a  " <<count<< " "<< "times"<<count<<std::endl;
   			}
			
    			std::cout << "game over" << std::endl;
    return 0;
}
