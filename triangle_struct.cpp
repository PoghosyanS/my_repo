#include <iostream>

struct triangle
{
	int x;
	int y;



};


int main()
{
	triangle a;
	triangle b;
	triangle c;
	std::cout<<"enter a "<<std::endl;
	std::cin>>a.x;
	std::cin>>a.y;
	std::cout<<"enter b "<<std::endl;
	std::cin>>b.x;
	std::cin>>b.y;
	std::cout<<"enter c "<<std::endl;
	std::cin>>c.x;
	std::cin>>c.y;
	if ((c.x - a.x )/(b.x - a.x) == (c.y - a.y) / (b.y - a.y))
	{
		std::cout<<"inposible triangle"<<std::endl;
	}
	else
	{
		std::cout<<"posible triangle"<<std::endl;
	}

	
	return 0;
}
