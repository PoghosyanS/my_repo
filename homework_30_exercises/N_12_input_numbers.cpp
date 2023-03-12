#include <iostream>




int main()
{	
	int size = 10;
	int arr[size] = {0};
	std::cout<<"enter a number :"<<std::endl;
	int num;
	while (true)
	{
		std::cin>>num;
		if (num == -1)
		{
			break;
		}
		else
		{
			arr[num - 1]++;
		}
	}
	for (int i = 0;i < size;i++)
	{
		std::cout<<arr[i]<<std::endl;
	}


	return 0;
}
