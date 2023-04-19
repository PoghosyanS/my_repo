#include <iostream>
#include "queue.hpp"
#include <cassert>

//initialization members of Node class with  constructor
Queue::Node::Node(int data = 0,Node* ptrnext = nullptr) {
	this->data = data;
	this->ptrnext = ptrnext;
}

//initialization members of class Stack with  default constructor
Queue::Queue() {
	m_size = 0;
	m_node = nullptr;
}

//creat destructor it clears the memory space we are using so that we don't have any memory loss
Queue::~Queue() {
	while(!is_empty()) {
		pop();
	}
}

//function which returned m_size of Queue
int Queue::get_size() {
	return m_size;
}

//function which to return true when Queue is empty
bool Queue::is_empty() {
	if (m_size > 0) {
		return false;
	}
	return true;

}

/*
function which returned first element of Queue
and the function checks if the size of the Queue is less than zero
warns that the Queue is empty
*/
int Queue::front() {
	assert(get_size() > 0 && "Queue is empty");
	return m_node->data;
}

//function adds the element of the Queue
void Queue::push(int value) {
	Node* tmp = new Node(value);
	if (m_node == nullptr) {
		m_node = tmp;
	}
	else {
		Node* new_node = m_node;
		while (new_node->ptrnext != nullptr) {
			new_node = new_node->ptrnext;
		}
		new_node->ptrnext = tmp;
	}
	m_size++;

}

/*
function deletes the most recent entered element of the stack
and the function checks if the size of the Queue is less than zero
warns that the Queue is empty
*/
void Queue::pop() {
	assert(get_size() > 0 && "list is empty");
	if (m_node != nullptr) {
             	Node* temp = m_node;
             	m_node = m_node->ptrnext;
             	delete temp;
             	m_size--;
         }

}

/*
function which returned last element of Queue
and the function checks if the size of the Queue is less than zero
warns that the Queue is empty
*/
int Queue::back() {
	assert(get_size() > 0 && "Queue is empty");
	Node* tmp = m_node;
	while(tmp->ptrnext != nullptr) {
		tmp = tmp->ptrnext;
	}
	return tmp->data;

}

