#include <iostream>



int main()
{
        std::string str;
        std::string temp_word = "";
        std::string short_word = "";
        int count = 0;
        int temp_count = 0;
        std::cout<<"enter a string"<<std::endl;
        getline(std::cin,str);
        for (int i = 0;i < str[i];i ++)
        {
                if (str[i] == ' ')
                {
                        if (count > temp_count )
                        {
                                temp_count = count;
                                short_word = temp_word;
                        }
                        count = 0;
                        temp_word = "";
                        
                }
                else
                {
                        temp_word += str[i];
                        count += 1;
                }

        }
        if (count <  temp_count)
        {
                temp_count = count;
                short_word = temp_word;

        }
        std::cout<<"short word is a : "<<short_word<<std::endl;
        
        return 0;
}
