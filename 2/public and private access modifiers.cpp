#include<iostream>
using namespace std;
class House
{
	public:
	    char h_country[100];
	    char h_city[100];
	    char h_address[100];
	    int h_number;
};

int main()
{
	House h;
	cout<<"house details.."<<endl;
	cout<<"enter h_country=";   cin>>h.h_country;
	cout<<"enter h_city=";      cin>>h.h_city;
	cout<<"enter h_address=";   cin>>h.h_address;
	cout<<"enter h_number=";    cin>>h.h_number;
	cout<<"room details.."<<endl;
	
	
	cout<<"house...."<<endl;
	cout<<"country.."<<h.h_country<<endl
	    <<"city.."<<h.h_city<<endl
		<<"address.."<<h.h_address<<endl
		<<"number.."<<h.h_number<<endl;
		
	
}





