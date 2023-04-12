#include <iostream>
#include "list.hpp"
#include <cassert>

//initialization Node constructor 
List::Node::Node(int data = 0,Node* ptrnext = nullptr) {
	this->data = data;
	this->ptrnext = ptrnext;
}

//initialization default constructor 
List::List() {
	first = nullptr;
	size = 0;
}

//make destructor
List::~List() {
	Node *tmp = first;
	while(tmp != nullptr) {
		Node *ptrnext = tmp->ptrnext;
		delete tmp;
		tmp = ptrnext;
	}
	first = nullptr;
	std::cout<<"destructor"<<std::endl;
}

//function which returned size of List
int List::get_size() {
	return size;
}

//function which to remove front element from list
void List::pop_front() {
	assert(size > 0 && "element not found");
	Node* temp = first;
	first = first->ptrnext;
	delete temp;
	size--;
}

//function which to append element end from list
void List::push_back(int data) {
	if (first == nullptr) {
		first = new Node(data);
	}
	else {
		Node* tmp = first;
		while(tmp->ptrnext != nullptr) {
			tmp = tmp->ptrnext;
		}
		tmp->ptrnext = new Node(data);
	}
	size++;
}

//function which to append element front from list
void List::push_front(int data) {
	first = new Node(data,first);
	size++;
}

//function which to remove last element from list 
void List::pop_back() {
	assert(size > 0 && "element not found");
	Node* new_node;
	Node* tmp = first;
	while(tmp->ptrnext != nullptr) {
		new_node = tmp;
		tmp = tmp->ptrnext;
	}
	delete tmp;
	size--;
	new_node->ptrnext = nullptr;
}

//function which to append element in your set index
void List::insert(int data,int index) {
	assert(index >= 0 && size > index && "index not found");
	Node* tmp = first;
	for (int i = 0;i < index -1;i++) {
		tmp = tmp->ptrnext;
	}
	Node* newelement = new Node(data,tmp->ptrnext);
	tmp->ptrnext = newelement;
	size++;
}

//function which to remove element in your set index
void List::remove_by_index(int index) {
	assert(index >= 0 && index < size && "index not found");
	Node *tmp = first;
	for (int i = 0;i < index - 1;i++) {
		tmp = tmp->ptrnext;
	}
	Node* new_element = tmp->ptrnext;
	tmp->ptrnext = new_element->ptrnext;
	size--;
}

//function which to return front element in list
int List::front() {

	return first->data;
}

//function which to return last element in list 
int List::back() {
	assert(size > 0 && "list is empty");

	Node *last = first;
	while(last->ptrnext != nullptr) {
		last = last->ptrnext;
	}
	return last->data;
}

//function which to print content from list
void List::print() {
	Node* pr = first;
	for (int i = 0; i < size;i++) {
		std::cout<<pr->data<<std::endl;
		pr->ptrnext != nullptr;
		pr = pr->ptrnext;

	}
}

//function which to return true when list is empty
bool List::is_empty() {
	
	if (size > 0) {
		return false;
	}
	return true;
}


//function which to remove element in your set value
void List::remove_by_value(int value) {
	Node* current = first;
    	Node* previous = nullptr;

    	while (current != nullptr) {
        	if (current->data == value) {
            		if (previous == nullptr) { 
                	first = current->ptrnext;

            		}

	    	else {
                	previous->ptrnext = current->ptrnext;
            	}

            		Node* toDelete = current;
            		current = current->ptrnext;
            		delete toDelete;
            		size--;
        	}

		else {
            		previous = current;
            		current = current->ptrnext;
        	}
    	}

}

//function which lets you a print object with []
int &List::operator[](int index) {
	assert(size > 0 && "List is empty");
	Node *tmp = first;
	for (int i = 0;i < index;i++) {
		tmp = tmp->ptrnext;
	}
	return tmp->data;

}
