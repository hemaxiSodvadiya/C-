#include<iostream>
using namespace std;
class emp1
{
   public:
      int id;
	  char name[100];
	  int age;
	  int salary;
	  char role;
	void setdata()
	{
		cout<<"enter id:";      cin>>id;
		cout<<"enter name:";    cin>>name;
		cout<<"enter age:";     cin>>age;
		cout<<"enter salary:";  cin>>salary;
		cout<<"enter role:";    cin>>role;
	}  	
	void getdata()
	{
		cout<<"id:"<<id<<endl<<"name:"<<name<<endl<<"age:"<<age<<endl<<"salary:"<<salary<<endl
		    <<"role:"<<role;
		
	}
};
class emp2
{
   public:
      int id;
	  char name[100];
	  int age;
	  int salary;
	  char role;
	void setdata1()
	{
		cout<<"enter id:";    cin>>id;
		cout<<"enter name:";  cin>>name;
		cout<<"enter age:";   cin>>age;
		cout<<"enter salary:";  cin>>salary;
		cout<<"enter role:";  cin>>role;
	}  	
	void getdata1()
	{
		cout<<"id:"<<id<<endl<<"name:"<<name<<endl<<"age:"<<age<<endl<<"salary:"<<salary<<endl
		    <<"role:"<<role;
		
	}
};
class Manger : public emp1,public emp2
{
	 public:
      int id;
	  char name[100];
	  int age;
	  int salary;
	  char role;
};
int main()
{
	Manger m1;
	m1.setdata();

	m1.setdata1();
		m1.getdata();  cout<<endl;
	m1.getdata1();
		return 0;
}






