#include <iostream>


int main()
{
	std::string str;
	std::string str1;
	std::cout<<"enter a number "<<std::endl;
	std::cin>>str;
	std::cout<<"enter a number "<<std::endl;
	std::cin>>str1;
	std::string concat = str + str1;
	std::cout<<concat<<std::endl;


	return 0;
}
