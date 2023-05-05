#include <iostream>
#include <cassert>
//declaration class Tree
class Tree {

private:
	//declaration class Tree
	class Node {
	public:
		//declaration members of class Node
		int data;
		Node *left;
		Node *right;
	public:
		//declaration constrictor of Node class
		Node(int value);
	};

private:
	//declaration member of class Tree
	Node *m_root;

public:
	//declaration constrictor which inicilization  member of class Tree
	Tree();

	//destructor it clears the memory space we are using so that we don't have any memory loss
	~Tree();
	
	//declaration push function which adds a new node to the tree with the given value, maintaining the binary search tree property.
	void push(int value);
	
	//declaration print_real function which realization print method of tree
	void print_real(Node*);

	//declaration print function which Prints the values of the nodes in the tree in a specified order
	void print();
		
	


};
