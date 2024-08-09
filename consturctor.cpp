#include<iostream>
using namespace std;
class demo{
	public:
	demo(){
		cout<<"Constructor invoked"<<endl;
	}
		~demo()
	{
		int sum,a=10,b=20;
		sum=a+b;
		cout<<sum;
	}
};
int main()
{
	demo obj;
	return 0;
}
