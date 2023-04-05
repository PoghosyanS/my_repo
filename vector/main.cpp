#include <iostream>
#include "vector.h"

int main(){

	//creat Vector object
	Vector obj;
	
	//call push_back function
	obj.push_back(5);
	obj.push_back(6);
	obj.push_back(7);
	obj.push_back(8);
	obj.push_back(9);
	obj.push_back(10);
	obj.push_back(11);
	obj.push_back(12);
	obj.push_back(13);

	//call print function
	obj.print();

	//call pop_back function
	obj.pop_back();
	obj.pop_back();
	obj.print();

	//print size

	std::cout<<"vector size = "<<obj.vector_size()<<std::endl;

	return 0;
}
