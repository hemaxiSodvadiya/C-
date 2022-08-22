#include<iostream>
#include<string.h>
using namespace std;
/*WAP to create a class Employee with setter and getter. 
Which have fields like id, name, role, salary, experience,
 address, email and
 contact. Get 5 records.*/
class Employee
{
	private:
		int id;
		char name[100];
		char role[100];
		int salary;
		int experience;
		char address[100];
		char email[100];
		int contact;
    public:
	   //setter
	   void Setdata()
	   {
	   	  cout<<"enter your id:";              cin>>id;
	   	  cout<<"enter your name:";            cin>>name;
	   	  cout<<"enter your role:";            cin>>role;
	   	  cout<<"enter your salary:";          cin>>salary;
	   	  cout<<"enter your experience:";      cin>>experience;
	   	  cout<<"enter your address:";         cin>>address;
	   	  cout<<"enter your email:";           cin>>email;
	   	  cout<<"enter your contact:";         cin>>contact;
	   }
	   //getter
	   void Getdata()
	   {
	   	   cout<<endl<<"^^^^^^^^^details^^^^^^^^^"<<endl
			   <<"Id:"          <<id         <<endl
			   <<"Name:"        <<name       <<endl
			   <<"Role:"        <<role       <<endl
		       <<"Salary:"      <<salary     <<endl
		       <<"Experience:"  <<experience <<endl
		       <<"Address:"     <<address    <<endl
		       <<"Email:"       <<email      <<endl
		       <<"Contact:"     <<contact    <<endl;
	   }		
};
int main()
{
	Employee e[100];
	int i,n;
	cout<<"How many Employee details:";     cin>>n;
	
	for(i=0;i<n;i++)
	{
		e[i].Setdata();
	}
	for(i=0;i<n;i++)
	{
		e[i].Getdata();
	}
	return 0;
}












