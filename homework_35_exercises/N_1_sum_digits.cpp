#include <iostream>



int main()
{	
	int num;
	int temp = 0;
	int summ = 0;
	std::cout<<"enter a number :"<<std::endl;
	std::cin>>num;
	while (num != 0)
	{
		temp = num % 10;
		summ += temp;
		num /= 10;
	}
	std::cout<<"summ ==  "<<summ<<std::endl;
	


	return 0;
}
