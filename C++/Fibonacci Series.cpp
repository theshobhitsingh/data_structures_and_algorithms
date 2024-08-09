#include<iostream>  
using namespace std;
int main()
{
    int n;int a=0;int b=1;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"The Fibonacci Series of the number"<<" "<<n<<" "<<"is:"<<endl;
    cout<< a <<" "<< b<<" " ;
    for (int i = 0; i <= n; i++)
    {
        int next=a+b;
        cout<<next<<" ";
    a=b;
    b=next;
    }
    return 0;
}
