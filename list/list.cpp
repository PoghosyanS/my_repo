#include <iostream>
#include "list.hpp"
#include <cassert>

//initialization members of Node class with  constructor 
List::Node::Node(int data = 0,Node* ptrnext = nullptr) {
	this->data = data;
	this->ptrnext = ptrnext;
}

//initialization members of class list with  default constructor 
List::List() {
	m_first = nullptr;
	m_size = 0;
}

//Copy constructor that creates a new linked list with the same data as another list
List::List(const List& other) {
	m_first = nullptr; 
    	m_size = 0; 
    
    	Node* other_node = other.m_first;
    	while (other_node != nullptr) {
        	Node* new_node = new Node(other_node->data);
        	if (m_first == nullptr) {
			m_first = new_node;
        	} 	
		else {
            		Node* tmp = m_first;
            		while (tmp->ptrnext != nullptr) {
                	tmp = tmp->ptrnext;
            		}
            		tmp->ptrnext = new_node;
        	}
        	m_size++; 
        	other_node = other_node->ptrnext; 
    	}
}

//creat destructor it clears the memory space we are using so that we don't have any memory loss
List::~List() {
	Node *tmp = m_first;
	Node *next = nullptr;
	while(tmp != nullptr) {
		next = tmp->ptrnext;
		delete tmp;
		tmp = next;
	}
}

//function which returned m_size of List
int List::get_size() {
	return m_size;
}

/*
function which to remove front element from list
and the function checks if the size of the list is less than zero
warns that the list is empty
*/
void List::pop_front() {
	assert(m_size > 0 && "list is empty");
	Node* temp = m_first;
	m_first = m_first->ptrnext;
	delete temp;
	m_size--;
}

//function which to append element end from list
void List::push_back(int data) {
	if (m_first == nullptr) {
		m_first = new Node(data);
	}
	else {
		Node* tmp = m_first;
		while(tmp->ptrnext != nullptr) {
			tmp = tmp->ptrnext;
		}
		tmp->ptrnext = new Node(data);
	}
	m_size++;
}

//function which to append element front from list
void List::push_front(int data) {
	m_first = new Node(data,m_first);
	m_size++;
}

/*
function which to remove last element from list 
and the function checks if the size of the list is less than zero
warns that the list is empty
*/
void List::pop_back() {
	assert(m_size > 0 && "list is empty");
	Node* new_node;
	Node* tmp = m_first;
	while(tmp->ptrnext != nullptr) {
		new_node = tmp;
		tmp = tmp->ptrnext;
	}
	delete tmp;
	m_size--;
	new_node->ptrnext = nullptr;
}

/*
function which to append element in your set index
if the index is greater than or equal to the size of the list or 
less than zero the function warns the index does not exist
*/
void List::insert(int data,int index) {
	assert(index >= 0 && m_size > index && "index does not exist");
	Node* tmp = m_first;
	for (int i = 0;i < index -1;i++) {
		tmp = tmp->ptrnext;
	}
	Node* newelement = new Node(data,tmp->ptrnext);
	tmp->ptrnext = newelement;
	m_size++;
}

/*
function which to remove element in your set index
if the index is greater than or equal to the size of the list or
less than zero the function warns the index does not exist
*/
void List::remove_by_index(int index) {
	assert(index >= 0 && index < m_size && "index does not exist");
	Node *tmp = m_first;
	for (int i = 0;i < index - 1;i++) {
		tmp = tmp->ptrnext;
	}
	Node* new_element = tmp->ptrnext;
	tmp->ptrnext = new_element->ptrnext;
	m_size--;
}

/*
function which to return front element in list
and the function checks if the size of the list is less than zero
warns that the list is empty
*/
int List::front() {
	assert(m_size > 0 && "list is empty");
	return m_first->data;
}

/*
function which to return last element in list 
and the function checks if the size of the list is less than zero
warns that the list is empty
*/
int List::back() {
	assert(m_size > 0 && "list is empty");

	Node *last = m_first;
	while(last->ptrnext != nullptr) {
		last = last->ptrnext;
	}
	return last->data;
}

/*
function which to print content from list
and the function checks if the size of the list is less than zero
warns that the list is empty
*/
void List::print() {
	assert(m_size > 0 && "list is empty");
	Node* pr = m_first;
	for (int i = 0; i < m_size;i++) {
		std::cout<<pr->data<<std::endl;
		pr->ptrnext != nullptr;
		pr = pr->ptrnext;

	}
}

//function which to return true when list is empty
bool List::is_empty() {
	
	if (m_size > 0) {
		return false;
	}
	return true;
}


/*
function which to remove element in your set value
To save the size of the list, we create a variable 
and after deleting the value, if the size of the list 
did not change, we warn that the value 
does not exist in the list.
*/
void List::remove_by_value(int value) {
	int tmp_size = m_size;
	Node* current = m_first;
    	Node* temp = nullptr;

    	while (current != nullptr) {
		
        	if (current->data == value) {
			
            		if (temp == nullptr) { 

                		m_first = current->ptrnext;

            		}

	    		else {
				temp->ptrnext = current->ptrnext;

            		}

            		Node* to_del = current;
            		current = current->ptrnext;
            		delete to_del;
            		m_size--;
        	}

		else {
            		temp = current;
            		current = current->ptrnext;
        	}
    	}
	assert(m_size != tmp_size && "the value does  not exist in the list");

}

/*
function which lets you a print object with []
if the index is greater than or equal to the size of the list or
less than zero the function warns the index does not exist
*/
int &List::operator[](int index) {
	assert(index  >= 0 && m_size > index &&"List is empty");
	Node *tmp = m_first;
	for (int i = 0;i < index;i++) {
		tmp = tmp->ptrnext;
	}
	return tmp->data;

}
