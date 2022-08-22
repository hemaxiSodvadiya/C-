#include<iostream>
using namespace std;
class Hemaxi
{
	public:
		void Marks()
		{
			cout<<"85 out of 100....";
		}
};
class Divya : public Hemaxi
{
	public:
		void Marks()
		{
			cout<<"75 out of 100...."<<endl;
			Hemaxi :: Marks();
		}
};
int main()
{
	Divya d1;
	d1.Marks();
	return 0;
}












