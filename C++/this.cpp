#include<iostream>
using namespace std ;
class demo{
	public:
		void disadd(){
			cout<<"Object's address:"<<this<<endl;
		}
}
main(){
	demo d1,d2,d3,d4;
	d1.disadd();
	d2.disadd();
	d3.disadd();
	d4.disadd();
}
complex add(complex,c1){
	complex t1;
	t1.real=this.real+c1.real;
	t1.imag=this.imag+c1.imag;
	return t1;
}
main(){
	complex ob1,ob2,ob3;
	ob3=ob1.add(ob2);
}
