#include<iostream>
#include<string.h>
using namespace std;
class A
{
	public:
		int id;
		char name[100];
		int age;
		int salary;
		int exp;
		char role[100];
		char email[100];
		int contact;
		void SetA()
	{
		cout<<"enter your id=";       cin>>this->id;
		cout<<"enter your name=";     cin>>this->name;
		cout<<"enter your role=";      cin>>this->role;
	}
};
class B 
{
	public:
		int id;
		char name[100];
		int age;
		int salary;
		int exp;
		char role[100];
		char email[100];
		int contact;
	void SetB()
	{
		cout<<"enter your salary=";       cin>>this->salary;
		cout<<"enter your exp=";     cin>>this->exp;
	}
	
};

class C : public B,public A
{
	public:
		public:
		public:
		int id;
		char name[100];
		int age;
		int salary;
		int exp;
		char role[100];
		char email[100];
		int contact;
		
	void getdata()
	{
		cout<<"name="<<name;
		cout<<"role="<<role;
		cout<<"salary="<<salary;
	}
};
class D: public A,public B ,public C
{
	public:
		public:
		public:
		int id;
		char name[100];
		int age;
		int salary;
		int exp;
		char role[100];
		char email[100];
		int contact;
	void setd()
	{
		cout<<"enter email:"; cin>>email;
		cout<<"contact:";  cin>>contact;
	}
		
	void getdata1()
	{
		cout<<"id:"<<id;
		cout<<"name="<<name;
		cout<<"age:"<<age;
	    cout<<"salary="<<salary;
	    cout<<"exp="<<exp;
		cout<<"role="<<role;
		cout<<"email:"<<email;
	}
};
    
int main()
{
	D d1;
	C c1;
	c1.SetA();cout<<endl; 
	c1.SetB();cout<<endl; 
		c1.getdata();cout<<endl; 
	d1.setd();   cout<<endl;   

	d1.getdata1();cout<<endl; 
}
















