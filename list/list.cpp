#include <iostream>
#include "list.hpp"
#include <cassert>

List::Node::Node(int data = 0,Node* ptrnext = nullptr) {
	this->data = data;
	this->ptrnext = ptrnext;
}

List::List() {
	frst = nullptr;
	size = 0;
}

int List::Size() {
	return size;
}

void List::pop_front() {
	assert(size > 0 && "element not found");
	Node* temp = frst;
	frst = frst->ptrnext;
	delete temp;
	size--;
}

void List::push_back(int data) {
	if (frst == nullptr) {
		frst = new Node(data);
	}
	else {
		Node* pwd = frst;
		while(pwd->ptrnext != nullptr) {
			pwd = pwd->ptrnext;
		}
		pwd->ptrnext = new Node(data);
	}
	size++;
}

void List::push_front(int data) {
	frst = new Node(data,frst);
	size++;
}

void List::pop_back() {
	assert(size > 0 && "element not found");
	Node* new_node;
	Node* tmp = frst;
	while(tmp->ptrnext != nullptr) {
		new_node = tmp;
		tmp = tmp->ptrnext;
	}
	delete tmp;
	size--;
	new_node->ptrnext = nullptr;
}

void List::insert(int data,int index) {
	assert(index >= 0 && size > index && "index not found");
	Node* tmp = frst;
	for (int i = 0;i < index -1;i++) {
		tmp = tmp->ptrnext;
	}
	Node* newelement = new Node(data,tmp->ptrnext);
	tmp->ptrnext = newelement;
	size++;
}

void List::erase(int index) {
	assert(index >= 0 && index < size && "index not found");
	Node *tmp = frst;
	for (int i = 0;i < index - 1;i++) {
		tmp = tmp->ptrnext;
	}
	Node* delelement = tmp->ptrnext;
	tmp->ptrnext = delelement->ptrnext;
	size--;
}

int List::front() {

	return frst->data;
}

int List::back() {
	assert(size > 0 && "list is empty");

	Node *last = frst;
	while(last->ptrnext != nullptr) {
		last = last->ptrnext;
	}
	return last->data;
}

void List::print() {
	Node* pr = frst;
	for (int i = 0; i < size;i++) {
		std::cout<<pr->data<<std::endl;
		pr->ptrnext != nullptr;
		pr = pr->ptrnext;

	}
}
