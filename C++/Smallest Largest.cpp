#include<iostream>
using namespace std;
int main(){
    int a[100],n,i,t,j;
    cout<<"Enter the number of elements:\n";
    cin>>n;
   cout<<"Enter the elements\n:";
   for(i=0;i<n;i++){
    cin>>a[i];
   }
   for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
if(a[i]>a[j]){
    t=a[i];
    a[i]=a[j];
    a[j]=t;
}
    }
   }
cout<<"The smallest element is\n"<<a[0];
cout<<"The largest element is\n"<<a[n-1];
}