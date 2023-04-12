#include <iostream>
#include "list.hpp"
#include <cassert>


int main() {
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

	//call pop front function
	a.pop_front();
	//print elements after call pop_front function
	std::cout<<"print elements after pop_front "<<std::endl;
	a.print();

	//call push_front function
	a.push_front(999);
	std::cout<<"print elements after push_front "<<std::endl;
	a.print();

	//call pop_back function
	a.pop_back();
	std::cout<<"print elements after pop_back "<<std::endl;
	a.print();
	
	//call insert function
	a.insert(555,2);
	std::cout<<"print elements after insert "<<std::endl;
	a.print();

	//call remuve_by_index function
	a.remove_by_index(1);
	std::cout<<"print elements after remove_by_index "<<std::endl;
	a.print();

	//call remove_by_value function
	std::cout<<"print elements after remove_by_value"<<std::endl;
	a.remove_by_value(13);
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
	a.print();

	//without reference dont assign element
	

	return 0;
}
