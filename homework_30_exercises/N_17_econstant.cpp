#include <iostream>

float faktorial(int n)
{
	float fakt = 1.0;
	while (n > 1)
	{
		fakt *= n;
		n--;
	}
	return fakt;

}

float conste(int num)
{
	float summ = 0.0;
	for (int i = 0;i <= num;i++)
	{
		summ += 1.0 / faktorial(i);
	}
	return summ;
}




int main()
{
	int num;
	std::cout<<"enter a number"<<std::endl;
	std::cin>>num;
	float econst = conste(num);
	std::cout<<econst<<std::endl;
	return 0;
}
