#include <iostream>
int cubadd(int, int);
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the value of a:";
    cin >> a;
    cout << "Enter the value of b:";
    cin >> b;
    c = cubadd(a, b);
    cout << "The sum of cube of two numbers is " << c;
}
int cubadd(int a, int b)
{
    return (a * a * a + b * b * b);
}
