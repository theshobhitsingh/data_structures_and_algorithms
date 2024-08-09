#include<iostream>
using namespace std;
main(){
	int n;
	cout<<"Enter the value of n :";
	cin>>n;
	bool isPrime=1;
	for(int i=2;i<n;i++)
		if(n%i==0){
			isPrime=0;
			break;
		}
		if(isPrime==0){
		cout<<"The number is not a Prime Number.";
	}
	else{
		cout<<"The number is a Prime Number";
	}
	return 0;
}
