#include <iostream>


void make_arr(int arr[],int size)
{
	for (int i = 0; i < size;i++)
	{
		std::cin>>arr[i];
	}

}

void show(int arr[],int size)
{
	for (int i = 0;i < size;i++)
	{
		std::cout<<arr[i]<<'\t';
	}
	std::cout<<std::endl;

}

void insert(int arr[],int &size,int m,int k)
{
	for (int i = size;i > m ;i--)
	{
		arr[i] = arr[i - 1];
	}

	arr[m] = k;
	size++;


}
void begin(int arr[],int &size ,int k)
{
	for(int i = size; i > 0;i--)
	{
		arr[i] = arr[i - 1];
	}
	arr[0] = k;
	size++;
}

void end(int arr[],int &size,int k)
{
	arr[size] = k;
	size++;
	
}
int main()
{	int size;
	int m;
	int k;
	int arr[size];
	std::cout<<"enter a size"<<std::endl;
	std::cin>>size;
	std::cout<<"enter a array elements"<<std::endl;
	make_arr(arr,size);
	std::cout<<"enter a k elment :"<<std::endl;
	std::cin>>k;
	begin(arr,size,k);
	show(arr,size);
	std::cout<<"enter a k elment :"<<std::endl;
	std::cin>>k;
	end(arr,size,k);
	show(arr,size);
	std::cout<<"enter  a M insert"<<std::endl;
	std::cin>>m;
	std::cout<<"enter a k elment :"<<std::endl;
	std::cin>>k;
	insert(arr,size,m,k);
	show(arr,size);

	return 0;
}
