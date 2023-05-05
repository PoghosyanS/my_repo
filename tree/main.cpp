#include "tree.hpp"

int main() {
	//creat object of Tree
	Tree a;

	//call push function
	a.push(6);
	a.push(3);
	a.push(5);
	a.push(9);
	a.push(1);

	//call print function
	a.print();
}
