#include<iostream>
#include<string.h>
using namespace std;
/*WAP to create two class HighSchool and
 College with fields like id, stu_name, 
 stu_roll_no, stu_standard, stu_age, stu_contact,
  stu_edu_institute_name and stu_address. Make suitable setter and 
getter with use of static data members.*/
class HighSchool
{
	private :
		int id;
		char stu_name[100];
		int stu_roll_no;
		int stu_standard;
		int stu_age;
		int stu_contact;
		static char stu_edu_institute_name[100];
		char stu_address[100];
	public:
	   //setter
	   void Setdata()
	   {
	   	   cout<<"enter your id:";              cin>>id;
	   	   cout<<"enter your stu_name:";        cin>>stu_name;
	   	   cout<<"enter your stu_roll_no:";     cin>>stu_roll_no;
	   	   cout<<"enter your stu_standard:";    cin>>stu_standard;
	   	   cout<<"enter your stu_age:";         cin>>stu_age;
	   	   cout<<"enter your stu_contact:";     cin>>stu_contact;
		   cout<<"enter your stu_address:";     cin>> stu_address;
	   }
	   //getter
	   void Getdata()
	   {
	   	  cout<<endl<<"^^^^^^^^^details^^^^^^^^^"<<endl
		        <<"Id:"<<id<<endl
		        <<"stu_name:"<<stu_name<<endl
		        <<"stu_roll_no:"<<stu_roll_no<<endl
		        <<"stu_standard:"<<stu_standard<<endl
		        <<"stu_age:"<<stu_age<<endl
				<<"stu_contact:"<<stu_contact<<endl
		        <<"stu_edu_institute_name:"<<stu_edu_institute_name<<endl
		        <<"stu_address:"<<stu_address<<endl;
	   }	
};
class College
{
		private :
		int id;
		char stu_name[100];
		int stu_roll_no;
		int stu_standard;
		int stu_age;
		int stu_contact;
	    static char stu_edu_institute_name[100];
		char stu_address[100];
	public:
	   //setter
	   void Setdata()
	   {
	   	   cout<<"enter your id:";              cin>>id;
	   	   cout<<"enter your stu_name:";        cin>>stu_name;
	   	   cout<<"enter your stu_roll_no:";     cin>>stu_roll_no;
	   	   cout<<"enter your stu_standard:";    cin>>stu_standard;
	   	   cout<<"enter your stu_age:";         cin>>stu_age;
	   	   cout<<"enter your stu_contact:";     cin>>stu_contact;
		   cout<<"enter your stu_address:";    cin>> stu_address;
	   }
	   //getter
	   void Getdata()
	   {
	   	  cout<<endl<<"^^^^^^^^^details^^^^^^^^^"<<endl
		        <<"Id:"<<id<<endl
		        <<"stu_name:"<<stu_name<<endl
		        <<"stu_roll_no:"<<stu_roll_no<<endl
		        <<"stu_standard:"<<stu_standard<<endl
		        <<"stu_age:"<<stu_age<<endl
				<<"stu_contact:"<<stu_contact<<endl
		        <<"stu_edu_institute_name:"<<stu_edu_institute_name<<endl
		        <<"stu_address:"<<stu_address<<endl;
	   }	
};
    char HighSchool::stu_edu_institute_name[100]="RNW";
    char College::stu_edu_institute_name[100]="RNW";
int main()
{
	HighSchool h[100];
	int i,n1;
	cout<<"how many highschools details:";   cin>>n1;
    	for(i=0;i<n1;i++)
	    {
		  h[i].Setdata();
	    }
	    for(i=0;i<n1;i++)
	    {
		  h[i].Getdata();
        }
    College c[100];    
	int j,n2;
	cout<<endl<<"how many colleges details:";   cin>>n2;
	    for(j=0;j<n2;j++)
	    {
		  c[j].Setdata();
	    }
	   for(j=0;j<n2;j++)
	    {
		  c[j].Getdata();
	    }
	return 0;
}    

