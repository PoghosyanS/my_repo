#include <iostream>
#include "vector.h"

int main(){

	//creat Vector object
	Vector obj;
	
	//call push_back function
	obj.push_back(5);
	obj.push_back(6);
	obj.push_back(7);

	std::cout<<"print vector members after push_back"<<std::endl;

	obj.print();

	//call pop_back function
	obj.pop_back();

	std::cout<<"print vector members after pop_back"<<std::endl;
	
	//call print function
	obj.print();
	
	//call insert function
	obj.insert(1,555);

	std::cout<<"print vector members after insert"<<std::endl;

	//call print function
	obj.print();

	std::cout<<"print vector member in 1 index "<<std::endl;

	std::cout<<obj[1]<<std::endl;
	
	std::cout<<"print vector member in 9 index "<<std::endl;

	std::cout<<obj[9]<<std::endl;

	return 0;
}
