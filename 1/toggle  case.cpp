#include<iostream>
using namespace std;
int main()
{
	int i,n;
	char a[100];
	cout <<"enter string=";
	gets(a);
	for(i=0;a[i];i++)
	{
		if(a[i]>=65 && a[i]<=90)
		a[i]=a[i]+32;
		else
		{
			if(a[i]>=97 && a[i]<=122)
			a[i]=a[i]-32;
		}
		
	}
	cout <<a;
}


