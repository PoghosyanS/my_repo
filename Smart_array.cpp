#include <iostream>

class Smart_array{

	int size;
	int *arr;

	public:

	Smart_array()
	{
		this->size = size;
		size = 0;
	}
		
	Smart_array(int size){
		this->size = size;
		arr = new int[size];
	}

	~Smart_array(){
		delete [] arr;
	}

	void make_arr(){
		for (int i = 0;i < size;i++){
			arr[i] = rand() % 20;
		}
	}

	void print_arr(){
		for (int i = 0;i < size;i++){
			std::cout<<arr[i]<<std::endl;
		}
	}

};

int main()
{
	Smart_array arr(10);
	arr.make_arr();
	arr.print_arr();

	return 0;
}

	
