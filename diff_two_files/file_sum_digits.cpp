#include <iostream>
#include <fstream>
#include <cassert>

//input file name
std::string path = "input_file.txt";

//object of ifstream class
std::ifstream fin;

//object of ofstream class
std::ofstream fout;

//output file name
std::string path1 = "output_file.txt";

//function wich have input file and creat output file
void input_output_file()
{
	//open input file
	fin.open(path);

	//open output file and append output  in every run
	fout.open(path1,std::ofstream::app);

	//check file is correct open or not
	if (!fin.is_open())
	{
		std::cout<<"file not exist"<<std::endl;
	}
	else
	{	
		std::string str;
		while(getline(fin,str))
		{	
			
			int sum = 0;		
			for (int j = 0;j < str.length();j++)
			{
				//check integer or not
				if(isdigit(str[j]))
				{
					sum += str[j] - '0';
				}
				else
				{
					fout<<"its a not integer";
					fout<<"\n";
				}
			}
			if (sum != 0)
			{

				fout<<sum;
				fout<<"\n";
			}

		}
		
	}
	fout.close();
	fin.close();
}

//function wich check for input number in terminal
void check_cin()
{
	int num;
	int sum = 0;
	int value = 0;

	std::cout<<"enter a number "<<std::endl;

	//check input number is integer and positive or not
	while (!(std::cin>>num) || (std::cin.peek() != '\n') || (num < 0))
	{
		//clear error flags
		std::cin.clear();
		//ignore any remaining characters
		std::cin.ignore(1000,'\n');
		std::cout<<"please enter a integer number"<<std::endl;
	}

	//additional verification
	assert(num >= 0);

	while (num != 0)
	{
		value = num % 10;
		sum += value;
		num /= 10;
	}
	std::cout<<"sum of digits = "<<sum<<std::endl;

}

int main(int argc,char* argv[])
{
	//check if input "-t" call a function input_output_file else check_cin()
	if (argc > 1 && argc < 3  && std::string(argv[1]) == "-t")
	{
		input_output_file();	
	}
	else if (argc == 1)
	{
		check_cin();
	}
	else
	{	
		std::cout<<"please if you wont run with file press -t"<<std::endl;
	}

	return 0;
}
