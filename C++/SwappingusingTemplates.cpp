#include<iostream>    //Template
using namespace std;
template <class x>
x swp(x a,x b)
{
	cout<<"Enter the value of a and b:"<<endl;
	cin>>a>>b;
	x c;
	c=a;
	a=b;
	b=c;
	cout<<"The value of a after swapping is: "<<a<<endl;
	cout<<"The value of b after swapping is: "<<b<<endl;
}
int main()
{
	float a,b;
	swp(a,b);
	//swp(10,20);
	return 0;
}
