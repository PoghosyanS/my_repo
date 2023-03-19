#include <iostream>

void digit(int arr[],int num)
{
	while (num != 0)
	{
		int digit = num % 10;
		arr[digit]++;
		num /= 10;
	}


}

char max_digit(int arr[],int size)
{	
	int my_arr[10] = {0};
	char maximum;
	int count = 0;
	for (int i = 0;i < size;i++)
	{
		digit(my_arr,arr[i]);
	}
	for (int i = 0;i < 10;i++)
	{
		if (count < my_arr[i])
		{
			count = my_arr[i];
			maximum = '0' + i;
		}
	}
	return maximum;

}



int main()
{	
	int arr[] = {577,173425,67,44,34};
	int size = sizeof(arr)/ sizeof(arr[0]);
	std::cout<<max_digit(arr,size)<<std::endl;;

	return 0;
}
