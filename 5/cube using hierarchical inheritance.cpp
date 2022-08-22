#include<iostream>
using namespace std;
class A
{
    public:
	    int a,area;	
};
class Squar : public A
{
	public:
	   int a,area;
	   void set()
	   {
	   	cout<<"enter else:";   cin>>a;
	   }
	 void get()
	   {
	      area=a*a;
	      cout<<"Squar:"<<area;
	   }
};
class Cube : public A
{
	public:
	   int a,area;
	   void set()
	   {
	   	cout<<"enter else:";   cin>>a;
	   }
	 void get()
	   {
	      area=a*a*a;
	      cout<<"cube:"<<area;
	   }
};
int main()
{
	Squar s1;
	Cube c1;
	s1.set(); cout<<endl;
	s1.get();  cout<<endl;
	c1.set(); cout<<endl;
	c1.get();
	return 0;
}


