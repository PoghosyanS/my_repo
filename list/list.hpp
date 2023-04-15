//declaration class List
class List {

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
		//declaration members of List class
		int m_size;
		Node *m_first; 

	public:
		//declaration default constructor of List which initializes the memberss of the list class
		List();

		//declaration destructor which clears the memory space we are using so that we don't have any memory loss
		~List();
		
		//declaration copy constructor which creates a new linked list with the same data as another list
		List(const List &other);

		//declaration get_size function which returned size of List
		int get_size();

		/*
		declaration pop_front function which  to remove front element from list 
		and list size must be greater than zero
		*/
		void pop_front();

		//declaration push_back function which to append element end from list
		void push_back(int data);

		//declaration push_front function which to append element front from list
		void push_front(int data);

		/*
		declaration pop_back function which to remove last element from list 
		and list size must be greater than zero
		*/
		void pop_back();

		/*
		declaration insert function which to append element in your set index
		and index must be less than the size of the list and equal to or greater than zero
		*/
		void insert(int data,int index);

		/*
		declaration remove_by_index function which to remove element in your set index
		and index must be less than the size of the list and equal to or greater than zero
		*/
		void remove_by_index(int index);

		/*
		declaration front function which to return front element in list
		and list size must be greater than zero
		*/
		int front();
		
		/*
		declaration back function which to return last element in list 
		and list size must be greater than zero
		*/
		int back();

		//declaration print function which to print content from list
		void print();

		/*
		declaration remove_by_value function which to remove element in your set value
		and value must exist in the list
		*/
		void remove_by_value(int value);

		/*
		declaration is_empty function which to return true when list is empty
		and function to return false when list size great then zero
		*/
		bool is_empty();

		/*
		declaration operator overload function which lets you a print object with []
		and index must be less than the size of the list and equal to or greater than zero
		*/
		int& operator[](int index);

		//function allows you to compare the addresses of two objects
		bool operator!=(const List& other);


};
