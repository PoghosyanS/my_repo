#include "stack.hpp"

//function which make a capacity
void Stack::change_capacity() {
	m_capacity *= 2;
	int *temp_arr = new int[m_capacity];
	for (int i = 0;i < m_size;i++) {
		temp_arr[i] = m_arr[i];
	}
	delete [] m_arr;
	m_arr = temp_arr;
}

//initialization members of class Stack with  default constructor
Stack::Stack() {
	m_size = 0;
	m_capacity = 5;
	m_arr = new int[m_capacity];
}

//destructor it clears the memory space we are using so that we don't have any memory loss
Stack::~Stack() {
	delete [] m_arr;
}

//function which returned m_size of Stack
int Stack::get_size() {
	return m_size;
}

//function which to return true when Stack is empty
bool Stack::is_empty() {
	if (get_size() > 0) {
		return false;
	}
	return true;
}

//function returns a reference to the top most element of the stack
int& Stack::top() {
	assert(get_size() > 0 && "stack is empty");
	return m_arr[m_size -1];
}

//function adds the element  at the top of the stack
void Stack::push(int value) {
	if (m_size == m_capacity) {
		change_capacity();
	}
	m_arr[m_size] = value;
	m_size++;
}

/*
function deletes the most recent entered element of the stack
and the function checks if the size of the stack is less than zero
warns that the stack is empty
*/
void Stack::pop() {
	assert(get_size() > 0 && "stack is empty");
	m_size--;
}

