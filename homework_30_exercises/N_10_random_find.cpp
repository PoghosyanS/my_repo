#include <iostream>
#include <ctime>

int  func_random()
{
	srand(time(NULL));
	int random_number = rand()% 100;
	return random_number;
}

void game(int true_answer)
{
	
	int num;
	int count = 0;
	std::cout<<"enter a 1 - 100  numbers :"<<std::endl;
	while (true)
	{
		std::cin>>num;
		count++;
		if (num < true_answer)
		{
			std::cout<<"number is lower :"<<std::endl;
		}
		else if (num > true_answer)
		{
			std::cout<<"number is high "<<std::endl;
		}
		else
		{
			std::cout<<"count of steps :"<<count<<":   you win"<<std::endl;
			break;
		}

	}
}



int main()
{	int arg = func_random();
	game(arg);

	return 0;
}
