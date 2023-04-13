#include <iostream>
#include "list.hpp"
#include <cassert>

int main() {

	//creat a object
	List a;

	//call push_back function
	a.push_back(11);
	a.push_back(12);
	a.push_back(13);
	a.push_back(14);
	a.push_back(15);

	//print elements after call push_back function
	std::cout<<"print elements after push_back "<<std::endl;
	a.print();

	//creat copy constructor object
	List b(a);

	std::cout<<"print elements of list after creating copy constructor"<<std::endl;
	b.print();
	
	//call push_back function after copy constructor 
	b.push_back(111);
	assert(b[5] == 111 && "the data has not been added to the list after push_back"); //check added element end of list

	std::cout<<"print the list again to make sure that the contents of the a object after the copy constructor have not changed"<<std::endl;
	a.print();	
	//call pop front function
	a.pop_front();
	assert(a[0] != 11 && "data has not deleted"); //check  the start element deleted
	std::cout<<"print elements after pop_front "<<std::endl;
	a.print();

	//call push_front function
	a.push_front(999);
	std::cout<<"print elements after push_front "<<std::endl;
	assert(a[0] == 999 && "the data has not been added to the list"); //check added element at the beginning
	a.print();

	//call pop_back function
	a.pop_back();
	std::cout<<"print elements after pop_back "<<std::endl;
	assert(a[0] == 999 && a[1] == 12 && a[2] == 13 && a[3] == 14 && "data has not deleted "); //check the last element deleted 
	a.print();
	
	//call insert function
	a.insert(555,2);
	std::cout<<"print elements after insert "<<std::endl;
	assert(a[2] == 555 && "the data has not been added to the list"); //check added element in your set index 
	a.print();

	//call remuve_by_index function
	a.remove_by_index(1);
	std::cout<<"print elements after remove_by_index "<<std::endl;
	assert(a[1] != 12 && "data has not deleted"); //check in your set index element deleted
	a.print();

	//call remove_by_value function
	std::cout<<"print elements after remove_by_value"<<std::endl;
	a.remove_by_value(13);
	assert(a[2] != 13 && "data has not deleted"); //check in your set data element deleted
	a.print();

	//call front function
	std::cout<<"print element after front "<<std::endl;
	std::cout<<a.front()<<std::endl;

	//call method get_size
	std::cout<<"print size "<<std::endl;
	std::cout<<a.get_size()<<std::endl;

	//call back function
	std::cout<<"print element after back "<<std::endl;
	std::cout<<a.back()<<std::endl;

	//call operator overload function
	std::cout<<"print List element with operator []"<<std::endl;
	std::cout<<a[2]<<std::endl;
	
	//call is_empty function
	std::cout<<"print is_empty function"<<std::endl;
	std::cout<<a.is_empty()<<std::endl;

	//experiment operator overload with reference
	a[0] = 777;
	std::cout<<"print after аssign"<<std::endl;
	assert(a[0] == 777 && "assignment failed"); //check assignment failed
	a.print();

	//without reference dont assign element
	
	return 0;
}
