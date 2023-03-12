#include <iostream>

void triangle(int num)
{	
	int empty = num - 1;
	int star = 1;
	for (int i = 0;i < num;i++)
	{
		for (int j = 0;j < star ; j++)
		{
			std::cout<<"*";
		}
		for (int c = 0;c < empty;c++)
		{
			std::cout<<" ";
		}
		std::cout<<std::endl;
		empty--;
		star++;
	}


}
void triangle_two(int num)
{
	int empty = num - 1;
	int star = 1;
	for (int i = 0;i < num;i++)
	{
		for (int j = 0;j < empty;j++)
		{
			std::cout<<" ";
		}
		for (int c = 0;c < star;c++)
		{
			std::cout<<"*";
		}
		std::cout<<std::endl;
		empty--;
		star++;

	}
}



int main()
{	
	int N;
	std::cout<<"enter a number :"<<std::endl;
	std::cin>>N;
	triangle(N);
	triangle_two(N);

	return 0;
}


               

	       
