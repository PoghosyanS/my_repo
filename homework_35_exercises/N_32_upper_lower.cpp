#include <iostream>
#include <string>

std::string upper(std::string str)
{
	for (int i = 0;i < str.length();i++)
	{
		str[i] = toupper(str[i]);
	}
	return  str;
}

std::string lower(std::string str)
{
	for (int i = 0;i < str.size();i++)
	{
		str[i] = tolower(str[i]);
	}
	return str;
}


bool anagram(std::string str,std::string str1)
{
	if (str.length() != str1.length())
	{
		return false;
	}
	int arr[256] = {0};
	for (int i = 0;i < str.length();i++)
	{
		arr[str[i]]++;
		arr[str1[i]]--;
	}
	for (int i = 0;i < 256;i++)
	{
		if (arr[i] != 0)
		{
			return false;
		}
	}
	return true;


}


int main()
{	
	std::string str = "mary";
	std::string str1 = "army";
	std::string upp = "upper";
	std::string low = "LOWER";
	std::cout<<upper(upp)<<std::endl;
	std::cout<<lower(low)<<std::endl;
	if (anagram(str,str1))
	{
		std::cout<<"words is a anagram: "<< str <<" and "<<str1<<std::endl;
	}
	else
	{
		std::cout<<"words is not anagram: "<< str <<" and "<<str1<<std::endl;
	}

	return 0;
}
