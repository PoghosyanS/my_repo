#include <iostream>


int main()
{
	int size = 7;
	int arr[size] = {4,9,2,9,2,1,9};
	int max = arr[0];
	int count = 0;
	for (int i = 0;i < size;i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		else if(arr[i] == max)
		{
			count++;
		}
	}
	std::cout<<"maximum number "<<max<<"  count of maximum numbers  "<<count<<std::endl;

	
	return 0;
}
