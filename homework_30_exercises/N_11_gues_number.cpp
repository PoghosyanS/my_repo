#include <iostream>


int main()
{
	int corect_answer;
	std::cout<<"enter a 100 numbers:"<<std::endl;
	std::cin>>corect_answer;
	int count_answers = 0;
	int low = 1;
	int high = 100;
	int input_answers;
	char answer = ' ';

	while (answer != 'c' && count_answers < 7)
	{
		input_answers = (low + high) /2;
		std::cout<<input_answers<<"(high/low/or correct)"<<std::endl;
		std::cout<<"enter a h/l/c"<<std::endl;
		std::cin>>answer;
		if (answer == 'h')
		{
			high = input_answers -1;
		}
		else if (answer == 'l')
		{
			low = input_answers + 1;
		}
		count_answers++;
	}	
	if (answer == 'c')
	{
		std::cout<<"computer goues number  in  "<<count_answers<<"  steps"<<std::endl;
	}
	return 0;
}
