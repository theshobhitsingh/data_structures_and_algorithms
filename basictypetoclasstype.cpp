#include <iostream>
using namespace std;
class Numbers{
	int a,b;
	public:
		Numbers(){
		}
		Numbers(int k){
			a=k;
			b=0;
		}
		void getdata(int x,int y){
			a=x;b=y;
		}
		void show(){
			cout<<"a="<<a<<endl<<"b="<<b;
		}
	};
	int main()
	{
		Numbers N;
		int t=50;
		N=t;
		N.show();
	}
