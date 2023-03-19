#include <iostream>

int find(char* str,char* substr)
{
	int len_str = 0;
	int len_sub = 0;
	int count = 0;

	while (str[len_str] != '\0')
	{
		len_str++;
	}
	while (substr[len_sub] != '\0')
	{
		len_sub++;
	}

	for(int i = 0;i < len_str;i++)
	{
		for (int j = 0; j < len_sub;j++)
		{
			if (str[i + j] != substr[j])
			{
				count = 0;
				break;
			}
			count++;

		}
		if (count == len_sub)
		{
			return i;
		}
	}
	return -1;
}


int main()
{
	char str[] = "my program";
	char substr[] = "gram";
	std::cout<<"index  substr is  :"<<find(str,substr)<<std::endl;;

	
	return 0;
}
