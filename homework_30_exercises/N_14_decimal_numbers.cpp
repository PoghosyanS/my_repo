#include <iostream>

int decimal_number(std::string str)
{
	int num = 1;
	int decimal = 0;
	for (int i = str.length() - 1; i >= 0;i--)
	{
		if (str[i] == '1')
		{
			decimal += num;
		}
		num *= 2;
	}
	return decimal;


}

int main()
{
	std::cout<<"enter a binary digits :"<<std::endl;
	std::string decimal_string;
	std::cin>>decimal_string;
	int decimal_func = decimal_number(decimal_string);
	std::cout<<"decimal number is a  "<<decimal_func<<std::endl;




	return 0;
}
