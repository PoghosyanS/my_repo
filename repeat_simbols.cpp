#include <iostream>


int main()
{
        std::string str;
	std::string repeat_simbols = "";
	std::string short_word = "";
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

	else if (count < num_count)
        {
                num_count = count;
               short_word  = new_word;

        }
	for (int i = 0;i < long_word[i];i++)
	{
		for (int j = 0;j < short_word[j];j++)
		{
			if (long_word[i] == short_word[j] )
			{
				repeat_simbols += short_word[j];
							
			}
		}
	
	}
        std::cout<<"long word is a : "<<long_word<<std::endl;
        std::cout<<"short word is a : "<<short_word<<std::endl;
        std::cout<<"repeat_simbols  is a : "<<repeat_simbols<<std::endl;
        
        return 0;
}
