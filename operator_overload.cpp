#include <iostream>

class Number
{
	int n1;
	public:
		Number()
		{
			n1 = 0;
		}

		Number(int value1)
		{
			n1 = value1;
		}

		void print()
		{
			std::cout<<this->n1<<std::endl;
		}

		int get_n1()
		{
			return n1;
		}


		Number operator+(const Number& other)
		{
			Number temp;
			temp.n1 = this->n1 + other.n1;
			return temp;
		}

		Number operator-(const Number& other)
		{
			Number temp;
			temp.n1 = this->n1 - other.n1;
			return temp;
		}

		Number operator*(const Number& other)
		{
			Number temp;
			temp.n1 = this->n1 * other.n1;
			return temp;
		}

		Number operator/(const Number& other)
		{
			Number temp;
			temp.n1 = this->n1 / other.n1;
			return temp;
		}

		bool operator ==(const Number& other)
		{
			if (this->n1 == other.n1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}

		bool operator !=(const Number& other)
		{
			if (this->n1 != other.n1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}

		Number & operator ++()
		{
			this->n1++;
			return *this;
		}
		

		std::ostream& operator<<(std::ostream& other)const
		{
			other<<n1;
			return other;
		}


};
		std::ostream& operator<<(std::ostream& other,const Number& n1)
		{
			return n1<<other<<std::endl;;
		}

int main()
{
	Number a1(60);
	Number a2(30);
	Number a3;

	++a1;

	a3 = a1 / a2;
	a3.print();

	std::cout<<a1<<std::endl;

	bool x = a1 == a2;
	if(x)
	std::cout<<"objects is equal"<<std::endl;
	else
	std::cout<<"objects is not ewual"<<std::endl;
	return 0;
}
