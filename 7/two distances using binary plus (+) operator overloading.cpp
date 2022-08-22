#include<iostream>
using namespace std;
 
class Distance
{
    private:
        int feet,inche;
                                                            
    public:
       
        void SetDistance()
        {
            cout << "Enter feet: ";
            cin >>feet;
            cout << "Enter inches: ";
            cin >>inche;
        }
        
        void dispDistance()
        {
            cout << "Feet:" << feet << "\t" << "Inches:" << inche << endl;
        }
       
        Distance operator+(Distance dis)
        {
            Distance temp;  
            temp.inche= inche+dis.inche;
            temp.feet  = feet+dis.feet+(temp.inche/12);
            temp.inche=temp.inche%12;
            return temp;
        }
};
int main()
{
    Distance d1,d2,d3;
     
    cout << "Enter first  distance:" << endl;
    d1.SetDistance();
    cout << endl;
     
    cout << "Enter second distance:" << endl;
    d2.SetDistance();
    cout << endl;
    d3=d1+d2;
     
    cout << "Total Distance:" << endl;
    d3.dispDistance();
 
    cout << endl;
    return 0;
}








