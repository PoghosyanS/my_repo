class Vector
{
	private:
	//class members declaration
	int m_size;
	int *m_arr;
	int m_capacity;

	private:
	
	//function declaration which make a capacity
	void change_capacity();

	public:
	//constructor declaration which initializate members of class
	Vector();

	//destructor declaration which delete dynamic memory 
	~Vector();

	//push_back function declaration which append element end of Vector
	void push_back(int value);
	
	//pop_back function declaration which delete element end of Vector
	void pop_back();

	//insert function declaration which append element in your set index
	void insert(int index,int value);

	//print function declaration which print elements in Vector
	void print();
	
	//vector_size function declaration which returned size of Vector
	int vector_size();
	
	//operator overload function which let print object with []
	int& operator[](int index);

	//declaration get element function which returned element which exists
	int& get_element(int index);
};
