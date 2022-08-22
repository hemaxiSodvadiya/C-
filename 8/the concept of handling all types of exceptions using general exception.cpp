#include<iostream>
using namespace std;
class Complex
{
	public:
		int a,b,sum;
	void Setdata()
	{
		cout<<"enter 1 value: "<<endl;
		cout<<"enter a:";   cin>>a;
		cout<<"enter b:";   cin>>b;
	}
	void Getdata()
	{
		sum=a+b;
		cout<<"op 1 value sum:"<<sum<<endl;
	}	
};
class Complex1 : public Complex
{
	public:
		int x,y,sum1;
	void Setdata1()
	{
		cout<<"enter 2 value: "<<endl;
		cout<<"enter x:";   cin>>x;
		cout<<"enter y:";   cin>>y;
	}
	void Getdata1()
	{
		sum1=x+y;
	    cout<<"op 2 value sum:"<<sum1<<endl;
	
	  try 
      {
		if(sum1==0)
		{
			throw 24.78;
		}
		else
		{
			cout<<sum/sum1<<endl;
		}
	  }
	catch(int n)
	{
		cout<<endl<<"can not divide by zero...";
	}
	catch(...)
	{
		cout<<endl<<"can not possible ....please try again....";
	}
	}	
};
int main()
{
	Complex1 c1;
	int a;
	c1.Setdata();
	c1.Setdata1();
	c1.Getdata();
	c1.Getdata1();

	
	return 0;
}









