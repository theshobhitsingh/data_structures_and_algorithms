#include<iostream>
using namespace std;
main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int row=1;
    while (row<=n)
    {
    int	col=1;
        while (col<=n)
        {
        char ch='A'+row+col-2;
		 cout<<ch<<"\t";
        col++;
        }
        cout<<endl;
        row++; 
    }
}
