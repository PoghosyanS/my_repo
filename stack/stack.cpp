#include <iostream>
#include "stack.hpp"
#include <cassert>

//initialization members of Node class with  constructor
Stack::Node::Node(int data = 0,Node *ptrnext = nullptr) {
	this->data = data;
	this->ptrnext = ptrnext;
}
//initialization members of class Stack with  default constructor 
Stack::Stack() {
	m_size = 0;
	m_node = nullptr;
}

//creat destructor it clears the memory space we are using so that we don't have any memory loss
Stack::~Stack() {
	while(!is_empty()) {
		pop();
	}
}

//function which returned m_size of Stack
int Stack::get_size() {
	return m_size;
}

//function which to return true when Stack is empty
bool Stack::is_empty() {
	if (m_size > 0) {
		return false;
	}
	return true;
}

//function returns a reference to the top most element of the stack 
int& Stack::top() {
	assert(m_node != nullptr && "stack is empty");
	return m_node->data;
}

//function adds the element  at the top of the stack
void Stack::push(int data) {
	Node *new_node = new Node(data);
	new_node->ptrnext = m_node;
	m_node = new_node;
	m_size++;
}

/*
function deletes the most recent entered element of the stack
and the function checks if the size of the stack is less than zero
warns that the stack is empty
*/
void Stack::pop() {
	assert(get_size() > 0  && "stack is empty");
	Node* tmp = m_node;
	m_node = m_node->ptrnext;
	delete tmp;
	m_size--;
}
