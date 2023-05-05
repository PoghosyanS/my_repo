#include "tree.hpp"

//constructor which inicilization members of Node class
Tree::Node::Node(int data) {
	this->data = data;
	this->left = nullptr;
	this->right = nullptr;
}

//constrictor which inicilization  member of class Tree
Tree::Tree() {
	m_root = nullptr;
}

//destructor it clears the memory space we are using so that we don't have any memory loss
Tree::~Tree() {
	delete m_root;
}

//push function which adds a new node to the tree with the given value, maintaining the binary search tree property 
void Tree::push(int data) {
	Node *New_node = new Node(data);

	if (m_root == nullptr) {
		m_root = New_node;
		return;
	}

	Node *tmp = m_root;
	while (tmp != nullptr) {
		if (data < tmp->data) {
			if (tmp->left == nullptr) {
				tmp->left = New_node;
				return;
			}
			tmp = tmp->left;
		}
		else {
			if (tmp->right == nullptr) {
				tmp->right = New_node;
				return;
			}
			tmp = tmp->right;
		}
	}


}

//function print_real function which realization print methof of tree
void Tree::print() {
	assert(m_root != nullptr && "tree is empty");
	print_real(m_root);
}

//print function which Prints the values of the nodes in the tree in a specified order
void Tree::print_real(Node *tmp) {
	if (tmp == nullptr) {
		return;
	}
	print_real(tmp->left);
	std::cout<<tmp->data<<std::endl;
	print_real(tmp->right);
}


