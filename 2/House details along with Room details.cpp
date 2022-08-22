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
class Room
{
	public:
	    int r_bed;
	    int r_ac;
	    int r_fan;
	    int r_photo;
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
	Room r;
	cout<<"enter r_bed=";       cin>>r.r_bed;
	cout<<"enter r_ac=";        cin>>r.r_ac;
	cout<<"enter r_fan=";       cin>>r.r_fan;
	cout<<"enter r_photo=";     cin>>r.r_photo;
	
	cout<<"house...."<<endl;
	cout<<"country.."<<h.h_country<<endl
	    <<"city.."<<h.h_city<<endl
		<<"address.."<<h.h_address<<endl
		<<"number.."<<h.h_number<<endl;
		
	cout<<"room...."<<endl;
	cout<<"bed.."<<r.r_bed<<endl
	    <<"ac.."<<r.r_ac<<endl
		<<"fan.."<<r.r_fan<<endl
		<<"photo.."<<r.r_photo<<endl;
}








