#include<iostream>
using namespace std;
template <class x>
x big(x a,x b)
{
	if(a>b)
	return a;
	else
	return b;
}
int main()
{
	cout<<big(5,15)<<endl;
	cout<<big(7.22,22.01)<<endl;
}
