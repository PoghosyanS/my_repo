class Vector
{
	private:
	//class members declaration
	int m_size;
	int *m_arr;
	int m_capasity;

	private:
	
	//function declaration
	void change_capasity();

	public:
	//constructor declaration
	Vector();

	//destructor declaration 
	~Vector();

	//push_back function declaration
	void push_back(int value);
	
	//pop_back function declaration
	int pop_back();

	//print function declaration
	void print();
	
	//vector_size function declaration
	int vector_size();

};
