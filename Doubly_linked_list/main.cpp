#include "doubly_list.hpp"

int main() {
	
	//create object of Doubly_list
	Doubly_list<int> a;
	
	//call a push_back function and check with assert elements incremented end of list or not
	a.push_back(6);
	a.push_back(5);
	a.push_back(7);
	a.push_back(8);
	a.push_back(9);
	assert(a.get_size() == 5 &&  "elements are not incremented");

	////call pop function and check with assert element has been deleted or not
	a.pop_back();
	assert(a.get_size() == 4 && "element was not deleted");

	//call push_front front and check with assert elements incremented start of list or not
	a.push_front(555);
	assert(a[0] == 555 && "element is not added to the beginning of the list");
	
	//call front function and check with assert element found in  start of list or not
	a.front();
	assert(a.front() == 555 && "element not found start of list");

	//call back function and check with assert element found in end of list or not
	a.back();
	assert(a.back() == 8 && "element not found end of list");

	//call pop_front function and check with assert front element deleted or not
	a.pop_front();
	assert(a.get_size() == 4 && "element was not deleted");
	
	//call insert function and check with assert element incremented in your set index
	a.insert(2,999);
	assert(a[2] == 999 && "elements are not incremented");

	//call reverse function and check with assert have the elements changed by places or not
	a.reverse();
	assert(a.front() == 8 && a.back() == 6 && "no change occurred");

	//call bubbleSort function and check with assert sorts the list members in ascending order or not
	a.bubbleSort();
	assert(a[0] == 5 && a[1] == 6 && a[2] == 7 && a[3] == 8 && a[4] == 999 && "list not sorted");

	//call insertionSort function and check with assert sorts the list members in ascending order or not
	a.insertionSort();
	assert(a[0] == 5 && a[1] == 6 && a[2] == 7 && a[3] == 8 && a[4] == 999 && "list not sorted");

	//call print function 
	a.print();

	return 0;
}
