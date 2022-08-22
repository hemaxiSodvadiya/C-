#include<iostream>
#include<string.h>
using namespace std;
/*WAP to create a class Hotel with fields
 like id, name, type, staff_size, room_size,
  establish_year, address, rating_type and website. 
  Illustrate the use of encapsulation (strict encapsulation) 
with this keyword.*/
class Hotel
{
	private:
		int id;
		char name[100];
		char type[100];
		int staff_size;
		int room_size;
		int establish_year;
		char address[100];
		char  rating_type[100];
		char website[100];
	public:
	    //setter
		void Setdata()
		{
			cout<<"enter your id:";                 cin>>id;
			cout<<"enter your name:";               cin>>name;
			cout<<"enter your type:";               cin>>type;
			cout<<"enter your staff_size:";         cin>>type;
			cout<<"enter your room_size:";          cin>>room_size;
			cout<<"enter your establish_year:";     cin>>establish_year;
			cout<<"enter your address:";            cin>>address;
			cout<<"enter your rating_type:";        cin>>rating_type;
			cout<<"enter your website:";            cin>>website;
		}	
		//getter
		void Getdata()
		{
			cout<<endl<<"^^^^^^^^^details^^^^^^^^^"<<endl
		        <<"Id:"<<id<<endl
		        <<"Name:"<<name<<endl
		        <<"Type:"<<type<<endl
		        <<"Room_size:"<<room_size<<endl
		        <<"Establish_year:"<<establish_year<<endl
				<<"Address:"<<address<<endl
		        <<"Rating_type:"<<rating_type<<endl
		        <<"Website:"<<website<<endl;
		       
		}
};
int main()
{
	Hotel h[100];
	int i,n;
	cout<<"How many hotals details:";   cin>>n;
	for(i=0;i<n;i++)
	{
		h[i].Setdata();
	}
	for(i=0;i<n;i++)
	{
		h[i].Getdata();
	}
	return 0;
}











