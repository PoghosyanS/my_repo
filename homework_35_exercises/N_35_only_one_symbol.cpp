#include <iostream>

std::string one_simbol(std::string str)
{
	std::string newstr = "";
	for (int i = 0; i < str.length();i++)
	{
		if (i == 0 || str[i] != str[i - 1])
		{
			newstr += str[i];
		}
	}
	return newstr;
}


int main()
{	std::string str = "aaaaaaaaabc";
	std::cout<<str<<"  "<<one_simbol(str)<<std::endl;

	return 0;
}
