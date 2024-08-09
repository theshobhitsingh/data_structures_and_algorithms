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
		void sub();
		void mod();
		void div();
};
template<typename t>
void maths<t>::add()
{
	cout<<"\n The addition of the given numbers"<<first+second<<endl;
}
template<typename t>
void maths<t>::mul()
{
	cout<<"\n The multiplication of the given numbers"<<first*second<<endl;
}
template<typename t>
void maths<t>::sub()
{
	cout<<"\n The subtraction of the given numbers"<<first-second<<endl;
}
template<typename t>
void maths<t>::div()
{
	cout<<"\n The division of the given numbers"<<first/second<<endl;
}
template<typename t>
void maths<t>::mod()
{
	cout<<"\n The modulos of the given numbers"<<first%second<<endl;
}
int main()
{
	maths <int> obj(10,20);
	obj.add();
	obj.mul();
	obj.div();
	obj.mod();
	obj.sub();
}
