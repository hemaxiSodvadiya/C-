
#include<iostream>
#include<string.h>
using namespace std;
class M
{
	private:
		string s;
  public:
  	   
   void Print()
	 {
		
		cout<<"id :";
	 }	
    void Print(string str)
     {
	    cout<<" 1:-"<<str;
	 }
	 
};
int main()
{
	M m1;
	m1.Print();
	m1. Print("hemaxi...");
	return 0;
}

