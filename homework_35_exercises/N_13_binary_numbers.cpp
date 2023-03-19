#include <iostream>


int main()
{
	int arr[32];
	int num;
	int i = 0;
	std::cout<<"enter a decimal number :"<<std::endl;
	std::cin>>num;
	while (num != 0)
	{
		arr[i] = num % 2;
		num /= 2;
		i++;
	}
	for (int j = i - 1; j >= 0;j--)
	{
		std::cout<<arr[j]<<'\t';
	}
	std::cout<<std::endl;

	return 0;
}
