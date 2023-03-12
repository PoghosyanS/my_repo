#include <iostream>



int main()
{	int num;
	int temp;
	std::cout<<"enter a number :"<<std::endl;
	int reverse = 0;
	std::cin>>num;
	while (num != 0)
	{
		temp = num % 10;
		reverse = reverse * 10 + temp;
		num /= 10;
	}
	std::cout<<"reverse = "<<reverse<<std::endl;


	return 0;
}
