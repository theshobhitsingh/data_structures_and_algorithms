#include<iostream>
using namespace std;
class Number
{
	int x;
	public:
	Number(){
		x=0;
	}
	Number(int n){
		x=n;
	}
	Number operator -(){
		x=-x;
		return x;
	}
	void show()
	{
		cout<<"x="<<x<<endl;
	}
};
int main(){
	Number N(10);
	N.show();
	-N;
	N.show();
}
