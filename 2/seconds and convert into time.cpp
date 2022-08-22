#include<iostream>
using namespace std;
class Time
{  
   public:
   int b;
};
int main()
{
	Time h1;
    int  a,h,m,s,sum,total;
    cout<<"enter==";
    cin >>h1.b;
    a=h1.b;
   if(a>60)
    {
       
        total= a/ 60;

        h =a+total;
        m=h-(total * 60);
        s=m+(total*60);
    }
	cout << endl << "Sum of distances = " <<endl
	             << m<< " hour "   <<endl
				 << h<< " minute"  <<endl
				 <<s<<"second"; 

	return 0;
}

