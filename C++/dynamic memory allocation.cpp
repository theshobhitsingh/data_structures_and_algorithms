#include<iostream>
using namespace std;
int main()
{
	int *arr;
	int size;
	
	cout<<"Enter the size of integer array: ";
	cin>>size;
	
	cout<<"Creating an array of size"<<" "<<size<<endl;
	arr=new int[size];
	
	cout<<"Enter the array elements:";
	for(int i=0;i<size ;i++){
		cin>>arr[i];
	}
	
	cout<<"The entered array elements are: ";
	for(int i=0;i<size ;i++){
		cout<<arr[i]<<endl;
	}
	
	cout<<"The use of new and delete operators is successful."<<endl;
	
	delete arr;
}
