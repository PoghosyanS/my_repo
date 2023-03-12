#include <iostream>


int main()
{	
	int N;
	int M ;
	std::string simbol;
	std::cout<<"enter a N number "<<std::endl;
	std::cin>>N;
	std::cout<<"enter a M number "<<std::endl;
	std::cin>>M;
	std::cout<<"enter a simbol "<<std::endl;
	std::cin>>simbol;
	for (int i = 0;i < N;i++)
	{
		for (int j = 0;j < M;j++)
		{
			if (i == 0 || i == N - 1 || j == 0 || j == M - 1) 
			{
				std::cout<<simbol;
			}
			else
			{

				std::cout<<" ";
			}

		}
		std::cout<<std::endl;
	}


	return 0;
}
