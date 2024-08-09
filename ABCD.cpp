#include<iostream>
using namespace std;
main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int row=1;
    while (row<=n)
    {
        int col=1;
        while (col<=row)
        {
char ch=('A'+row-1);
cout<<ch;
col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}