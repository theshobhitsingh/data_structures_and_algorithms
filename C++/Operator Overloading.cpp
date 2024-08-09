#include<iostream>
using namespace std;
class complex{
	int r,i;
	public:
		void input(){
		cout<<"Enter real:"<<endl;
		cin>>r;	
		cout<<"Enter imag:"<<endl;
		cin>>i;
		}
		void display(){
			cout<<r<<"+i"<<i<<endl;
		}
		complex operator+(complex c1){
			complex t;
			t.r=c1.r+r;
			t.i=c1.i+i;
			return t;
		}
};
int main(){
	complex a,b;
	a.input();
	b.input();
	a.display();
	b.display();
	b=a+b;
	b.display();
}
