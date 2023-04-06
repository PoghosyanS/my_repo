#include <iostream>
#include "vector.hpp"
#include <cassert>

//function which make a capacity 
void Vector::change_capacity(){

	m_capacity *= 2;
	int *temp_arr = new int[m_capacity];
	for (int i = 0; i < m_size;i++){
		temp_arr[i] = m_arr[i];
	}
	delete [] m_arr;
	m_arr = temp_arr;
}
//constructor which initializate Vector members
Vector::Vector(){
	
	m_size = 0;
	m_capacity = 5;
	m_arr = new int[m_capacity];
}

//copy constructor which  copy members of constructor
Vector::Vector(const Vector &other){
	this->m_size = other.m_size;
	this->m_capacity = other.m_capacity;
	this->m_arr = new int[other.m_capacity];
	
	for (int i = 0;i < other.m_size;i++){
		this->m_arr[i] = other.m_arr[i];
	}
}

//destructor which delete m_arr
Vector::~Vector(){
	
	delete [] m_arr;
}

//function which append element end of vector
void Vector::push_back(int value){
		
		if (m_size == m_capacity){
			
			change_capacity();
		}
		m_arr[m_size] = value;
		m_size++;
}

//function wich append element in your set index 
void Vector::insert(int index,int value){
	
	if (m_size == m_capacity){
		change_capacity();
	}

	for (int i = m_size - 1;i >= index;i--){
		
		m_arr[i + 1] = m_arr[i];
	}
	
	m_arr[index] = value;
	m_size++;
}

//function which delete element end of vector and check if size of vector less than zero terminate the program
void Vector::pop_back(){
	
	//check size great then 0
	assert(m_size > 0 && "vector is empty");
	m_size--;
}

//function which returned first element of Vector and check Vector is empty or not
int Vector::front(){

	assert(m_size != 0 && "vector is empty");
	return m_arr[0];
}

//function which returned last element of Vector and check Vector is empty or not
int Vector::back(){

	assert(m_size != 0 && "vector is empty");
	return m_arr[m_size - 1];
}

//function which deleted element in your set index
void Vector::erase(int index){
	
	assert(index >= 0 && m_size > index && "element not found with that index" );

	for (int i = index + 1; i <= m_size;i++){
		
		m_arr[i - 1] = m_arr[i];
	}
	m_size--;
}

//function which print content vector
void Vector::print(){
	
	for (int i = 0;i < m_size;i++){
		
		std::cout<<m_arr[i]<<std::endl;
	}
}

//function which returned size of vector
int Vector::vector_size(){
	
	return m_size;

}

//function check with assert function if element exists return that otherwise terminate the program
int& Vector::get_element(int index){
	assert(index > 0 && index < m_size && "element not found with that index");
	return m_arr[index];	
}

//function lets you a print object with []
int& Vector::operator[](int index){
	return get_element(index);
}
