#include <iostream>
using namespace std;

class Distance 
{
	public:
    int feet;
    int inch;
};

int main() 
{
    Distance h1,h2;
    int total,sum1,sum2;
    cout << "Enter first distance=" << endl;
    cout << "Enter feet=";
    cin >> h1.feet;
    cout << "Enter inch=";
    cin >> h1.inch;

    cout << "for second distance" << endl;
    cout << "Enter feet=";
    cin >> h2.feet;
    cout << "Enter inch=";
    cin >> h2.inch;

    sum1 = h1.feet+h2.feet;
    sum2 = h1.inch+h2.inch;

    
    if(sum2> 12)
    {
       
        total= sum2/ 12;

        sum1 =sum1+total;
        sum2 =sum2-(total * 12);
    } 

    cout << endl << "Sum of distances = " 
	             << sum1 << " feet  " 
				 << sum2 << " inches";
    return 0;
}




