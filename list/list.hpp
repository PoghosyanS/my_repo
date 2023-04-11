//class list
class List {

private:
	//nested class Node
	class Node {

	public:
		//
		Node* ptrnext;
		int data;
		Node(int data,Node* ptrnext);

		};

	private:

		int size;
		Node *frst; 

	public:
		List();
		//~List();
		//List(const List &other);
		int Size();
		void pop_front();
		void push_back(int data);
		void push_front(int data);
		void pop_back();
		void insert(int data,int index);
		void erase(int index);
		int front();
		int back();
		void print();

};
