#include <iostream>
#include "stack.hpp"
#include <cassert>

int main() {
	//create a object
	Stack a;

	//call push function
	a.push(55);
	a.push(66);
	a.push(77);
	assert(a.get_size() == 3 && "elements are not incremented");

	//call a top function and rewrite number
	a.top() = 99;
	//check after rewrite
	assert(a.top() == 99 && "assignment failed");

	//call pop function
	a.pop();
	//check after pop whether the element has been deleted or not
	assert(a.get_size() == 2 && "element was not deleted");

	//call a print function
	a.print();

	return 0;
}
