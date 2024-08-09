#include<iostream> //C++ Overloading and Overriding
using namespace std;
class demo
{
	public:
		void sum(int x, int y)
		{
			cout<<x+y<<endl;
		}
		void sum(int x,int y,int z) // Function Overloading
		{
			cout<<x*y*z<<endl;
		}
		void sum(int x)   // Function Overloading
		{
			cout<<x<<endl;
		}
};
class demo1:public demo
{
	public:
		void sum(int x,int y)
		{
			cout<<x-y<<endl;
			demo::sum(10,12);//Function Overriding
		}
};
int main()
{
	demo1 d;
	d.sum(10,8);
	d.demo::sum(10,200);//Function Overriding calling parent class
	d.demo::sum(10,20,30);
	d.demo::sum(12);
	return 0;
}


