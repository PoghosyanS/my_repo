#include <iostream>
#include <cassert>

//declaration class Stack
class Stack {

private:
	//declaration members of Stack class
	int m_size;
	int* m_arr;
	int m_capacity;

private:
	/*
	declaration change_capacity function which make capacity and The capacity of a vector represents the amount of memory allocated to store its elements
	*/
	void change_capacity();

public:
	//declaration default constructor of Stack which initializes the memberss of the Stack class
	Stack();

	//declaration destructor which clears the memory space we are using so that we don't have any memory loss
	~Stack();

	/*
	declaration is_empty function which to return true when Stack is empty
	and function to return false when Stack size great then zero
	*/

	bool is_empty();

	//declaration get_size function which returned size of Stack
	int get_size();

	// declaration top function which returns a reference to the top most element of the stack
	int& top();

	//declaration push function which adds the element  at the top of the stack
	void push(int data);

	/*
	declaration pop function which deletes the most recent entered element of the stack
	and list size must be greater than zero
	*/
	void pop();
	
};

