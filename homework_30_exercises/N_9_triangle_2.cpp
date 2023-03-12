#include <iostream>

void triangle_one(int num)
{
	int empty = num * 2 - 1;
	int star = 1;

	for (int i = 0;i < num;i++)
	{
		for (int j = 0;j < empty;j++)
		{
			std::cout<<" ";
		}
		for (int c = 0;c < star;c++)
		{
			std::cout<<"* ";
		}
		for (int f = 0;f < empty;f++)
		{
			std::cout<<" ";
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
	triangle_one(N);
	return 0;
}
