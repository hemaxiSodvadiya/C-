#include<iostream>
#include<string.h>
using namespace std;
 /*WAP to create a class which Read and print Class
 , Student details using Two Classes.
  (Make two classes, create one classe's obj in another class.)*/
class Student
{
	private:
		int id;
		char name[100];
		int age;
	public:
	   //setter
	   void Setdata()
	   {
	   	  cout<<"enter your id=";     cin>>this->id;
	   	  cout<<"enter your name=";   cin>>this->name;
	   	  cout<<"enter your age=";    cin>>this->age;
	   }
	   void Getdata()
	   {
	   	  cout<<endl<<"^^^^^^^^^details^^^^^^^^^"<<endl;
	   	  cout<<"id:"<<this->id<<endl;
	   	  cout<<"name:"<<this->name<<endl;
	   	  cout<<"age:"<<this->age<<endl;
	   }	
};
class Detail
{
	private:
		char course[100];
		static char clg[100];
		static char city[100];
	Student d;
	public:
		//setter
		void Setdata()
		{
			d.Setdata();
			cout<<"enter course="; cin>>course;
		}
		//getter
		void Getdata()
		{
			d.Getdata();
			cout<<"course="<<course<<endl;
			cout<<"college="<<clg<<endl;
			cout<<"city="<<city<<endl;
		}
};
    char Detail::clg[100]="RNW";
    char Detail::city[100]="Surat";
int main()
{
	Detail d1[100];
	int i,n;
	cout<<"how many students details="; cin>>n;
	for(i=0;i<n;i++)
	{
		d1[i].Setdata();
	}
	for(i=0;i<n;i++)
	{
		d1[i].Getdata();
	}
	return 0;
}    



