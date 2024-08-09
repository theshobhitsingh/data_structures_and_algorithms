#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	if(n==0) //Edge Case
	cout<<"1";
	int m=n;
	int mask=0;
	while(m!=0)
	{
		mask=(mask<<1)|1;
		m=m>>1;
	}
	int ans=(~n)&mask;
	cout<<"The complement of the given number is:"<<ans;
}
