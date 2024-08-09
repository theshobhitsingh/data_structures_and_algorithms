/*  1
   121
  12321
 1234321
123454321     */
#include<iostream>
using namespace std;
main(){
	int n;
	cout<<"Enter the value of n: ";
	cin>>n;
	int row=1;
	while(row<=n){
		//Space
		int space = n-row;
		while(space){
			cout<<" ";
			space--;
		}
		//Print first triangle
		int j=1;
		while(j<=row){
			cout<<j;
			j++;
		}
		//Print second triangle
		int start=row-1;
		while(start){
			cout<<start;
			start--;
		}
		cout<<endl;
		row++;
	}
	return 0;
}
