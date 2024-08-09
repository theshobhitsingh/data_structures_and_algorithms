#include<iostream>
using namespace std;
class one
{
	public:
		one(){cout<<"1"<<endl;}
		~one(){cout<<"-1"<<endl;}
};
class two:public one{
	public:
		two(){cout<<"two"<<endl;}
		~two(){cout<<"-2"<<endl;}
};
class three:public one{
	two b;
	public:
		three(){cout<<"3"<<endl;}
		~three(){cout<<"-3"<<endl;}
};
int main()
{
	three t;
	return 0;
}
