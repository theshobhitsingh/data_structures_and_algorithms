#include<iostream>
using namespace std;
int great(int,int,int);
main()
{
	int a,b,c;
	cout<<"Enter the values of a,b and c: "<<endl;
	cin>>a>>b>>c;
	int g=great(a,b,c);
	cout<<"The Greatest value is:"<<g<<endl;
}
int great(int a,int b,int c)
{
	if(a>b&&a>c){
		return a;
	}
	else if(b>a&&b>c){
		return b;
	}
	else{
		return c;
	}
}
