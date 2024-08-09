#include <iostream>
using namespace std;
int sum(int a, int b)
{
    return (a + b);
}
int sub(int a, int b)
{
    return (a - b);
}
int mul(int a, int b)
{
    return (a * b);
}
int divi(int a, int b)
{
    return (a / b);
}
int mod(int a, int b)
{
    return (a % b);
}
int main()
{
    int a, b;
    cout << "Enter the values:\n";
    cin >> a >> b;
    char ch;
    cout << "Enter the operation(+,-,*,/,%):\n";
    cin >> ch;
    if(ch=='+')
    cout<<"Sum is:"<<endl<<(sum(a,b));
    if(ch=='-')
    cout<<"Subtraction is:"<<endl<<(sub(a,b));
    if(ch=='*')
    cout<<"Multiple is:"<<endl<<(mul(a,b));
    if(ch=='/')
    cout<<"Division is:"<<endl<<(divi(a,b));
    if(ch=='%')
    cout<<"Modulo is:"<<endl<<(mod(a,b));
}
