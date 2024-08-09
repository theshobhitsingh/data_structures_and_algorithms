#include <iostream>
using namespace std;
void multiplication_table(int num)
{
    for(int i=1; i<=10; i++)
    {
        cout << num << " x " << i << " = " << num*i << endl;
    }
}
int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    multiplication_table(number);
    return 0;
}
