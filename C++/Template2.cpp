#include<iostream>    //Template
using namespace std;
template <class x,class y>
x big(x a,y b)
{
	if(a>b)
	return a;
	else
	return b;
}
int main()
{
	cout<<big(5,15.99)<<endl;
	cout<<big(7.22,22.01)<<endl;
}
