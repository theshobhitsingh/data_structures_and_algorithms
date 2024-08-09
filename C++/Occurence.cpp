#include<iostream>
using namespace std;
int main(){
    int n,a[100],i,num,count=0;
    cout<<"Write the number to find occurance:\n";
    cin>> num; 
    cout<<"Enter the number of elements:\n";
    cin>>n;
    cout<<"Enter the elements:\n";
    for(i=0;i<n;i++){
    cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]==num){
    count++;
    }
    }
    cout<<"The number "<<num<<" is occured "<<count<<" times.";

}