#include<iostream>
using namespace std;
template <typename t>
class maths
{
	private:
		t first,second;
	public:
		maths(){}
		maths(t a,t b){
			first=a;second=b;
		}
		void add();
		void mul();
};
template<typename t>
void maths<t>::add()
{
	cout<<"\n The addition of the given numbers"<<first+second;
}
template<typename t>
void maths<t>::mul()
{
	cout<<"\n The addition of the given numbers"<<first*second;
}
int main()

{
	maths <int> obj(10,20);
	obj.add();
	obj.mul();
}
