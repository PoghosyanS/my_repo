#include <iostream>

int main()
{
	std::string str;
	std::string new_word = "";
	std::string long_word = "";
	int count = 0;
	int num_count = 0;
	std::cout<<"enter a string"<<std::endl;
	getline(std::cin,str);
	for (int i = 0;i < str[i];i ++)
	{
		if (str[i] == ' ')
		{
			if (count > num_count )
			{
				num_count = count;
				long_word = new_word;
			}
			count = 0;
			new_word = "";
			
		}
		else
		{
			new_word += str[i];
			count += 1;
		}

	}
	if (count > num_count)
	{
		num_count = count;
		long_word = new_word;

	}
	std::cout<<"long word is a : "<<long_word<<std::endl;
	
	return 0;
}
