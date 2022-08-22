#include<iostream>
#include<string.h>
using namespace std;
class City
{
	public:
		int id;
		char name[100];
		int age;
		
	City (int id,char name[],int age)
	{
		this->id=id;
		strcpy(this->name,name);
		this->age=age;
	}
	void getdata()
	{
		cout<<"ID:"<<id<<endl<<"NAME:"<<name<<endl<<"AGE:"<<age<<endl<<endl;
	}
};
int main()
{
	City c1(1,"Hemaxi",21);
	City c2(2,"divya",22);
	c1.getdata();
	c2.getdata();
}


