#include <iostream>
#include "my_vector.h"
#include <cassert>

//function which make a capasity 
void Vector::change_capasity(){

	m_capasity *= 2;
	int *temp_arr = new int[m_capasity];
	int *m_arr = new int[m_capasity];
	for (int i = 0; i < m_size;i++){
		temp_arr[i] = m_arr[i];
	}
	delete [] m_arr;
	m_arr = temp_arr;
	m_size++;
}
//constructor definition
Vector::Vector(){
	
	m_arr = new int[m_capasity];
	m_size = 0;
	m_capasity = 5;
}

//destructor definition
Vector::~Vector(){
	
	delete [] m_arr;
}

//function which append element end of vector
void Vector::push_back(int value){
		
		if (m_size == m_capasity){
			
			change_capasity();
		}
		m_arr[m_size] = value;
		m_size++;
}

//function which delete element end of vector
int Vector::pop_back(){
	
	//check size great then 0
	assert(m_size > 0 && "vector is empty");
	int temp_arr = m_arr[m_size];
	m_size--;
	return temp_arr;
}

//function which print content vector
void Vector::print(){
	
	for (int i = 0;i < m_size;i++){
		
		std::cout<<m_arr[i]<<std::endl;
	}
	std::cout<<"vector size = "<<vector_size()<<std::endl;
}

//function which returned size of vector
int Vector::vector_size(){
	
	int temp_size = m_size;
	return temp_size;
}



