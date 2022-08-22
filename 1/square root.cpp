#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i,a[100],n,c;
	cout<<"enter else=";
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin>> a[i];
	}
	cout<<"===="<<endl;
	for(i=0;i<n;i++)
	{
		cout <<sqrt(a[i])<<endl;
	}
	
}


