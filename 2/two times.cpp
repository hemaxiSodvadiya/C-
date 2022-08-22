#include<iostream>
using namespace std;
class Time
{  
   public:
   int h;
   int m;	
};
int main()
{
	Time h1,h2;
    int total,sum1,sum2;
    cout << "1..." << endl;
    cout << "Enter hour=";
    cin >> h1.h;
    cout << "Enter minute=";
    cin >> h1.m;

    cout << "2..." << endl;
    cout << "Enter hour=";
    cin >> h2.h;
    cout << "Enter minute=";
    cin >> h2.m;
    sum1 = h1.h+h2.h;
    sum2 = h1.m+h2.m;

    
    if(sum2>60)
    {
       
        total= sum2/ 60;

        sum1 =sum1+total;
        sum2 =sum2-(total * 60);
    } 

    cout << endl << "Sum of distances = " 
	             << sum1 << " hour " 
				 << sum2 << " minute";
	return 0;
}




