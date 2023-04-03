#include <iostream>
#include <fstream>


//input file name
std::string input_file = "input_file.txt";

//object of ifstream class
std::ifstream fin;

//object of ofstream class
std::ofstream fout;

//output file name
std::string output_file = "output_file.txt";

//function returned sum of digits number and checked number int or not
int sum_of_digits(std::string str)
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
			return -1;
		}
	}
	return sum;
}


//function wich have input file and creat output file
void input_output_file()
{
	//open input file
	fin.open(input_file);

	//open output file and append output  in every run
	fout.open(output_file);

	//check file is correct open or not
	if (!fin.is_open())
	{
		std::cout<<"file not exist"<<std::endl;
	}
	else
	{	
		std::string str; 
		//int sum = 0;
		while(getline(fin,str))
		{			
			int sum = sum_of_digits(str);
			if (sum == -1){

				fout<<"its a not integer"<<std::endl;;
				//fout<<'\n';
			}
			else if (sum != 0)
			{
				fout<<sum;
				fout<<'\n';
			}
		}
	}
	fout.close();
	fin.close();
}

//function wich is entered by the user
int input_user()
{
	
	while (true)
	{
		std::cout<<"enter a number :"<<std::endl;
		std::string str;
		std::cin>>str;
		int sum = sum_of_digits(str);
		if (sum != -1)
		{
			return sum;
		}
		else
		{
			std::cout<<"please enter a number :"<<std::endl;
		}
	}
}



int main(int argc,char* argv[])
{
	if (argc == 2  && std::string(argv[1]) == "-t")
	{
		input_output_file();	
	}
	else if (argc == 1)
	{
		std::cout<<input_user()<<std::endl;
		
	}
	else
	{	
		std::cout<<"please if you wont run with file press -t"<<std::endl;
	}

	return 0;
}
