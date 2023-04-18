//declaration class Stack
class Stack {
private:
	//declaration nested class Node through which  create Node type
	class Node {
	public:
		 //members of Node class
		Node* ptrnext;
		int data;

		//declaration Node constructor
		Node(int data,Node* ptrnext);
	};

private:
	//declaration members of Stack class
	int m_size;
	Node* m_node;
public:
	//declaration default constructor of Stack which initializes the memberss of the Stack class
	Stack();

	//declaration destructor which clears the memory space we are using so that we don't have any memory loss
	~Stack();

	/*
	declaration is_empty function which to return true when Stack is empty
	and function to return false when list size great then zero
	*/
	bool is_empty();

	//declaration get_size function which returned size of Stack
	int get_size();

	// declaration top function which returns a reference to the top most element of the stack 
	int& top();

	//declaration push function which adds the element  at the top of the stack
	void push(int data);

	/*
	declaration pop function which deletes the most recent entered element of the stack
	and list size must be greater than zero
	*/
	void pop();

	/*declaration print function which printed elements of stack
	and the function checks if the size of the stack is less than zero
	warns that the stack is empty
	*/
	void print();
};
