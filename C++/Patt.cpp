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
        while (col<=n)
        {
        char start='A';
		 cout<<start;
		 start++  ; //  char ch ='A'+row -1; // char ch='A'+col-1;
        col++;
        }
        cout<<endl;
        row++; 
    }
}
