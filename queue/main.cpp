#include <iostream>
#include "queue.hpp"
#include <cassert>


int main() {
	
	//create a obect
	Queue a;

	//call push function
	a.push(55);
	a.push(66);
	a.push(77);
	//check with assert elements incremented or not
	assert(a.get_size() == 3 && "elements are not incremented");

	//call pop function
	a.pop();
	//check whether the element has been deleted or not
	assert(a.get_size() == 2 && "elements are not deleted");
	
	//print front function
	std::cout<<a.front()<<std::endl;
	//check first element 
	assert(a.front() == 66 && "the first element does not exist");

	//print back function
	std::cout<<a.back()<<std::endl;
	//check last element
	assert(a.back() == 77 && "the last element does not exist");

	return 0;
}
