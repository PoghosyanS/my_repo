#include <iostream>

int get_num(int num)
{
	int numbers = 0;
	while (num != 0)
	{
		numbers++;
		num /= 10;
	}
	return numbers;
}	

int pow(int num,int value)
{
	int res = 1;
	for (int i = 0;i < value;i++)
	{
		res *= num;
	}



	return res;
}

void print(int num)
{
	for (int i = 1;i <= num;i++)
	{
		int summ = 0;
		int temp = i;
		int numbers = (get_num(i));
		while(temp != 0)
		{
			int number = temp % 10;
			summ += pow(number,numbers);
			temp /= 10;
		}
		if (summ == i)
		{
			std::cout<<i<<" ";
		}
	}
		std::cout<<std::endl;

}



int main()
{	
	std::cout<<"armstrong numbers"<<std::endl;
	print(9999);

	return 0;
}
