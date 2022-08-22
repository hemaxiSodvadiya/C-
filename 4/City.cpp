#include<iostream>
#include<string.h>
using namespace std;
class City
{
	public:
		int id;
		char name[100];
		int age;
		
	City ()
	{
		cout<<"enter your id:";   cin>>id;
		cout<<"enter your name:";  cin>>name;
		cout<<"enter your age:";    cin>>age;
	}
	void getdata()
	{
		cout<<endl<<"ID:"<<id<<endl<<"NAME:"<<name<<endl<<"AGE:"<<age<<endl<<endl;
	}
};
int main()
{
	City c1,c2;
	c1.getdata();
	c2.getdata();
}


