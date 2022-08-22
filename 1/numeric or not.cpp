#include<iostream>
using namespace std;
int main()
{
	char a[100];
	int i,h=0,s=0;
	cout << " enter else=";
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='65' && a[i]<='90' || a[i]>='97' && a[i]<='122')
		{
			h++;
		}
		else if(i>=0 && i<=9)
		{
		   s++;
		}
		
	}
	if(h>0 && s>0||h>0)
	{
		cout<<"numeric";
	}
	else
	{
		cout<<"not numeric";
	}
}



