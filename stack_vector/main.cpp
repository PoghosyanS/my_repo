#include "stack.hpp"

int main() {
	//create a object
	Stack a;
	//call a push function and check with assert elements incremented or not
	a.push(11);
	a.push(12);
	a.push(13);
	a.push(14);
	assert(a.get_size() == 4 && "elements are not incremented");

	//call a pop failed and rewrite number
	a.top() = 99;
	//check after rewrite
	assert(a.top() == 99 && "assignment failed");

	//call pop function
	a.pop();
	//check after pop whether the element has been deleted or not
	assert(a.get_size() == 3 && "element was not deleted");

	return 0;
}
