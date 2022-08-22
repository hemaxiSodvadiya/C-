#include<iostream>
using namespace std;
 
class Complex
{
    private:
        int n;
         
    public:
        
        void Getdata(int x)
        {
            n=x;
        }
        void disp()
        {
            cout << "Number is: " << n;
        }
      
        Complex operator +(Complex a)
        {
            Complex x;  
            x.n=this->n + a.n;
            return (x);
        }
};
int main()
{
    Complex n1,n2,sum;
    n1.Getdata(50);
    n2.Getdata(60);
 
    sum=n1+n2;
     
    sum.disp();
    cout << endl;
    return 0;
}



