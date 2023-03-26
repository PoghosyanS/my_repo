#include <iostream>
#include <string>

class Human
{	
	public:
	int age;
	std::string name;
	std::string surname;

	Human()
	{

		age = 0;
		name = "";
		surname = "";
	}

	Human(std::string name,std::string surname,int age)
	{
		this->age = age;
		this->name = name;
		this->surname = surname;
	}

};

class Employee : public Human
{
	public:
	std::string company_name;
	int salary;
	int experience;

	Employee()
	{
		company_name = "";
		salary = 0;
		experience = 0;
	}

	Employee(std::string name,std::string surname,int age,std::string company_name,int salary,int experience):Human(name,surname,age)
	{
		this->company_name = company_name;
		this->salary = salary;
		this->experience = experience;
	}

};

class Staff : public Employee
{
	public:
	int level;
	std::string Staff_name;
	std::string profession;

	Staff()
	{
		level = 0;
		profession = "";
	}
	Staff(std::string Staff_name)
	{
		this->Staff_name = Staff_name;
	}

	Staff(std::string name,std::string surname,int age,std::string company_name,int salary,int experience,int level,std::string profession):Employee(name,surname,age,company_name,salary,experience)
	{
		this->level = level;
		this->profession = profession;
	}
	
	 bool operator ==(const Staff& other)
         {
                 if (name == other.name)
                 {
                         return true;
                 }
                 else
                 {
                         return false;
                 }
         }
};

class Manager : public Employee
{
	public:
	int size = 5;
	Staff arr[5];
	Staff tmp;

	Manager(std::string name,std::string surname,int age,std::string company_name,int salary,int experience,int level,std::string profession):Employee(name,surname,age,company_name,salary,experience)
	{
	}
	
	void hire(Staff name)
	{

		for (int i = 0;i < size;i++)
		{
			if(arr[i].age == 0)
			{	
				arr[i] = name;
				break;
			}
		}

	}

	void fire(Staff name)
	{
		for (int i = 0; i < size;i++)
		{
			if (arr[i] == name)
			{

				arr[i] = tmp;
			}
		}
	}
	
	void print()
	{
		for (int i = 0;i < size;i++)
		{
			if (arr[i].age != 0)
			{
			std::cout<<arr[i].name<<std::endl;
			}
		}

	}

};
 
int main()
{

	Manager a("Anny","Smith",77,"Apple",9000000,10,6,"programmer");
	Staff e("Anna","hovh",33,"zavod",50000,10,7,"programmer");
	Staff f("wil","Smith",55,"Amazon",60000,10,8,"programmer");
	Staff g("Anny","William",45,"Google",40000,10,9,"finanser");
	Staff h("Hovhannes","Petrosyan",65,"Grand Candy",70000,10,8,"programmer");
	Staff j("Lusine","Martirosyan",45,"School",90000,4,9,"teacher");
	a.hire(e);
	a.hire(f);
	a.hire(g);
	a.hire(h);
	a.hire(j);
	a.print();
	a.fire(e);
	a.print();
	
	return 0;

}
