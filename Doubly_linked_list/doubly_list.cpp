#include <iostream>
#include <cassert>

//create type T for class Node
template <class T>
class Node {
public:
	//members of Node class
	T data;
	Node* ptrnext;
	Node* ptrprev;
public:
	//initialization members of Node class with  constructor
	Node(T data = 0,Node* ptrnext = nullptr,Node* ptrprev = nullptr) {
	this->data = data;
	this->ptrnext = ptrnext;
	this->ptrprev = ptrprev;

	}

};

//create type T for class Doubly_list
template <class T>
class Doubly_list {

private:
	//declaration members of List class
	Node<T> *m_first;
	Node<T> *m_last;
	int m_size;
	


public:
//initialization members of class Doubly_list with  default constructor
Doubly_list() {
	m_size = 0;
	m_first = nullptr;
	m_last = nullptr;
}
//creat destructor it clears the memory space we are using so that we don't have any memory loss
~Doubly_list() {
	Node<T> *tmp = m_first;
	while(tmp != nullptr) {
		Node<T> *second = tmp->ptrnext;
		delete tmp;
		tmp = second;
	}
	m_first = nullptr;
	m_last = nullptr;
}

//function which returned m_size of list
T get_size() {
	return m_size;
}

//function which to return true when list is empty
bool is_empty() {
	if (m_size > 0) {
		return false;
	}
	return true;
}

//function which to append element end from list
void push_back(T data) {
	if (m_first == nullptr) {
		m_first = new Node<T>(data);
		m_last = m_first;
	}
	else {
		Node<T> *tmp = new Node<T>(data);
		m_last->ptrnext = tmp;
		tmp->ptrprev = m_last;
		m_last = tmp;

	}
	m_size++;
}

/*
function which to remove last element from list
and the function checks if the size of the list is less than zero
warns that the list is empty
*/
void pop_back() {
	assert(m_size > 0 && "list is empty");
	Node<T> *tmp = nullptr;
	m_last = m_last->ptrprev;
	m_last->ptrnext = nullptr;
	delete tmp;
	m_size--;
}

//function which to append element front from list
void push_front(T data) {
	if (m_first == nullptr) {
		m_first = new Node<T>(data,m_first);
	}
	else {
		Node<T> *tmp = new Node<T>(data);
		m_first->ptrprev = tmp;
		tmp->ptrnext = m_first;
		m_first = tmp;
		m_size++;
	}
}

/*
function which to remove front element from list
and the function checks if the size of the list is less than zero
warns that the list is empty
*/
void pop_front() {
	assert(m_size > 0 && "list is empty");
	Node<T> *tmp = nullptr;
	tmp = m_first;
	m_first = m_first->ptrnext;
	delete tmp;
	m_first->ptrprev = nullptr;
	m_size--;

}

/*
function which to append element in your set index
if the index is greater than or equal to the size of the list or 
less than zero the function warns the index does not exist
*/
void insert(T index,T data) {
	assert(index >= 0 && index < m_size && "index does not exist");
	Node<T> *tmp = new Node<T>(data);
	if (m_first == nullptr) {
		m_first = tmp;
		m_last = tmp;
	}
	else if (index == 0) {
		tmp->ptrnext = m_first;
		m_first->ptrprev = tmp;
		m_first = tmp;
	}
	else if (index < m_size / 2) {
		Node<T> *new_node = m_first;
		for (int i = 0; i < index;i++) {
			new_node = new_node->ptrnext;
		}
		tmp->ptrnext = new_node;
		tmp->ptrprev = new_node->ptrprev;
		new_node->ptrprev->ptrnext = tmp;
		new_node->ptrprev = tmp;
	}
	else {
		Node<T> *new_node = m_last;
		for (int i = m_size - 1;i > index;i--) {
			new_node = new_node->ptrprev;
		}
		tmp->ptrnext = new_node->ptrnext;
		tmp->ptrprev = new_node;
		new_node->ptrprev = tmp;
		new_node->ptrnext = tmp;
	}
	m_size++;
}
void remove_by_index(T index) {
	assert(index >= 0 && index < m_size && "index does not exist");	
	Node<T> *tmp = nullptr;
	if (index < m_size / 2) {
		tmp = m_first;
		for (int i = 0;i < index;i++) {
			tmp = tmp->ptrnext;
		}
	}
	else {
		tmp = m_last;
		for (int i = m_size - 1;i > index;i--) {
			tmp = tmp->ptrprev;
		}
	}

	if (tmp == m_first) {
		m_first = tmp->ptrnext;
		if(m_first != nullptr) {
			m_first->ptrprev = nullptr;
		}
	}
	else if (tmp == m_last) {
		m_last = tmp->ptrprev;
		if (m_last != nullptr) {
			m_last->ptrnext = nullptr;
		}
	}
	else {
		tmp->ptrprev->ptrnext = tmp->ptrnext;
		tmp->ptrnext->ptrprev = tmp->ptrprev;
	}
	delete tmp;
	m_size--;

}

/*
function which to return front element in list
and the function checks if the size of the list is less than zero
warns that the list is empty
*/
T& front() {
	assert(m_size > 0 && "list is empty");
	return m_first->data;
}

/*
function which to return last element in list
and the function checks if the size of the list is less than zero
warns that the list is empty
*/
T& back() {
	assert(m_size > 0 && "list is empty");
	return m_last->data;
}

/*
function which to print content from list
and the function checks if the size of the list is less than zero
warns that the list is empty
*/
void print() {
	Node<T> *tmp = m_first;
	while(tmp ->ptrnext != nullptr) {
		std::cout<<tmp->data<<std::endl;
		tmp = tmp->ptrnext;
	}
	if (tmp != nullptr) {
		std::cout<<tmp->data<<std::endl;
	}
}

/*
function which lets you a print object with []
if the index is greater than or equal to the size of the list or
less than zero the function warns the index does not exist
*/
T& operator[](int index) {
	assert(index >= 0 && index < m_size  && "list is empty");
	Node<T> *tmp = nullptr;
	tmp = m_first;
	for (int i = 0;i < index;i++) {
		tmp = tmp->ptrnext;
	}
	return tmp->data;
}


};
