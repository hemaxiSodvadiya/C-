#include<iostream>
using namespace std;
class Mother
{
	public:
		void display()
		{
			cout<<"Mother said:"<<endl;
			cout<<"hey....";
		cout<<"My daugther...";
		}
		
};
class Daugther : public Mother
{
	public:
		void display1()
		{
				cout<<"Daugthe said:"<<endl;
			cout<<"hello....";
		    cout<<"Mother...";
		}
		
};
int main()
{
    Daugther d1;
	d1.display();  cout<<endl;
	d1.display1()	;
	return 0;
}

