#include <iostream>
#include "vector.hpp"

int main(){

	//creat Vector object
	Vector obj;

	std::cout<<"print vector elements after push_back  with new object created by copy constructor"<<std::endl;
		
	//call push_back function
	obj.push_back(5);
	obj.push_back(6);
	obj.push_back(7);

	//call print function 
	obj.print();

	//creat copy constructor
	Vector copy(obj);
	copy.push_back(555);

	std::cout<<"print vector elements after creating copy constructor"<<std::endl;

	//call print function
	copy.print();

	std::cout<<"print againg content obj object to make sure which after push_back by copy object number 555 did not increase in obj "<<std::endl;

	//call print function
	obj.print();

	//call pop_back function
	obj.pop_back();

	std::cout<<"print vector elements after pop_back"<<std::endl;
	
	//call print function
	obj.print();
	
	//call insert function
	obj.insert(1,555);

	std::cout<<"print vector elements after insert"<<std::endl;

	//call print function
	obj.print();

	//print front function 
	std::cout<<"print front function"<<std::endl;
	std::cout<<obj.front()<<std::endl;

	//print back function
	std::cout<<"print back function"<<std::endl;
	std::cout<<obj.back()<<std::endl;
	
	//call erase function
	obj.erase(2);
	std::cout<<"print vector content after erase"<<std::endl;
	obj.print();

	std::cout<<"print vector element in 1 index with operator overload [] "<<std::endl;

	std::cout<<obj[1]<<std::endl;
	
	std::cout<<"print vector element in 9 index  and check element existsi or not "<<std::endl;

	std::cout<<obj[9]<<std::endl;

	return 0;
}
