#include <iostream>

bool match(std::string str,std::string str1)
{	
	int count = 0;
	for (int i = 0;i < str.length();i++)
	{
		bool word = true;
		for (int j = 0; j < str1.length();j++)
		{
			if(str[i + j] == str1[j])
			{	
				word = false;
				break;
			}

		}
		if (word)
		{
			return true;
		}
	}
	return false;

}


int main()
{	
	std::string str = "complicate";
	std::string str1 ="cat";
	std::cout<<match(str,str1)<<std::endl;
	if (match(str,str1))
	{
		std::cout<<"yes substring"<<std::endl;
	}
	else
	{
		std::cout<<"not substring"<<std::endl;
	}

	return 0;
}
