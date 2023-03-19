#include <iostream>

std::string replace(std::string str)
{
	std::string newstr = "";
	for (int i = 0; i < str.length();i++)
	{

		if (str[i] == 'a')
		{
			newstr += "ab";

		}

		else
		{
			newstr += str[i];
		}
	}
	return newstr;
}

int main()
{
	std::string str = "abc";
	std::cout<<str<<"  "<<replace(str)<<std::endl;;
	



	return 0;
}
