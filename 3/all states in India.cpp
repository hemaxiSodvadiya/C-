#include<iostream>
using namespace std;
class India
{
	private:
		static char h[29][50];
	public:
	    static void Getdata()
		{
			int i,j;
			for(i=0;i<29;i++)
			{
				for(j=0;h[i][j]!=NULL;j++)
				{
					cout<<h[i][j];
				}
			  cout<<endl;	
			}
		}	
};
char India :: h[29][50]={
	                        "Andhra Pradesh",
"Arunachal Pradesh",
"Assam",
"Bihar",
"Chhattisgarh",
"Goa",
"Gujarat",
"Haryana",
"Himachal Pradesh",
"Jammu and Kashmir",
"Jharkhand",
"Karnataka",
"Kerala",
"Madhya Pradesh",
"Maharashtra",
"Manipur",
"Meghalaya",
"Mizoram",
"Nagaland",
"Odisha",
"Punjab",
"Rajasthan",
"Sikkim",
"Tamil Nadu",
"Telangana",
"Tripura",
"Uttar Pradesh",
"Uttarakhand",
"West Bengal"
                        };
int main()
{
	India ::Getdata();
	return 0;
}                        
















