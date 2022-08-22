#include<iostream>
using namespace std;
int main()
{
	int i,h[100],a,b,c,d,e,A,B,C,D,E;
	cout<<"enter else=";
	cin>>a>>b>>c>>d>>e;
	A=a*a*a;
	B=b*b*b;	
	C=c*c*c;	
	D=d*d*d;
	E=e*e*e;
	cout<<"====="<<endl;
	h[0]=A;
	h[1]=B;
	h[2]=C;
	h[3]=D;
	h[4]=E;
	for(i=0;i<5;i++)
	{
		cout <<"h["<<i<<"]="<<h[i]<<endl;
	}
}


