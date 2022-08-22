#include<iostream>
using namespace std;
class Shape
{
	public:
	 	int area,base,width,height;
	
};
class Triangle : public Shape
{
	public:
	 	int area,base,width,height;
	void Setdata()
	{
		cout<<"enter width:";    cin>>width;
		cout<<"enter base:";   cin>>base;
	} 	
	void Getdata()
	{
	    area=(base*width)/2;
		cout<<"area of triangle:"<<area;	
	}
};
class Rectangle : public Triangle
{
	public:
	 	int area,base,width,height;
	void Setdata1()
	{
		cout<<"enter width:";    cin>>width;
		cout<<"enter height:";   cin>>height;
	} 	
	void Getdata1()
	{
	    area=width*height;
		cout<<endl<<"area of Rectangle:"<<area;	
	}
};
int main()
{
	Rectangle r1;
     r1.Setdata();cout<<endl;
	 r1.Getdata();cout<<endl;
	 
     r1.Setdata1();cout<<endl;
     r1.Getdata1();
	return 0;
}



























