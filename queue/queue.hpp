//declaration class Queue
class Queue {
private:
	//declaration nested class Node through which  create Node type
	class Node {
	public:
		//members of Node class
		Node* ptrnext;
		int data;
	public:
		//declaration Node constructor
		Node(int data,Node* ptrnext);
	};
private:
	//declaration members of Queue class
	int m_size;
	Node* m_node;
public:
	//declaration default constructor of Queue which initializes the memberss of the Queue class
	Queue();
	
	//declaration destructor which clears the memory space we are using so that we don't have any memory loss
	~Queue();
	
	//declaration front function which returned first element Queue
	int front();

	//declaration back function which returned last element Queue
	int back();

	/*
	declaration pop function which deletes the most recent entered element of the Queue
	and list size must be greater than zero
	*/
	void pop();

	//declaration push function which adds the element  at the top of the stack
	void push(int data);

	/*
	declaration is_empty function which to return true when Queue is empty
	and function to return false when Queue size great then zero
	*/
	bool is_empty();

	//declaration get_size function which returned size of Queue
	int get_size();

};

