//declaration class List
class List {

private:
	//declaration nested class Node
	class Node {

	public:
		Node* ptrnext;
		int data;
		
		//declaration Node constructor
		Node(int data,Node* ptrnext);

		};

	private:
		//declaration members of List class
		int size;
		Node *first; 

	public:
		//declaration default constructor of List
		List();

		//declaration destructor of List
		~List();
		
		//declaration copy constructor of List
//		List(const List &other);

		//declaration get_size function which returned size of List
		int get_size();

		//declaration pop_front function which  to remove front element from list
		void pop_front();

		//declaration push_back function which to append element end from list
		void push_back(int data);

		//declaration push_front function which to append element front from list
		void push_front(int data);

		//declaration pop_back function which to remove last element from list 
		void pop_back();

		//declaration insert function which to append element in your set index
		void insert(int data,int index);

		//declaration remove_by_index function which to remove element in your set index
		void remove_by_index(int index);

		//declaration front function which to return front element in list
		int front();
		
		//declaration back function which to return last element in list 
		int back();

		//declaration print function which to print content from list
		void print();

		//declaration remove_by_value function which to remove element in your set value
		void remove_by_value(int value);

		//declaration is_empty function which to return true when list is empty
		bool is_empty();

		//declaration operator overload function which lets you a print object with []
		int& operator[](int index);

};
