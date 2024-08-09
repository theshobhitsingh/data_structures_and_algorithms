#include<iostream>
#include<cmath>
using namespace std;

int num;
int i;

int main()
{
    cout << "Enter the number: ";
    cin >> num;

    for (i = 0; i < num; i++) {
        int p = pow(2, i);
        if (num == p) {
            cout << num << " is a power of 2." << endl;
            return 0;
        }
    }

    cout << num << " is not a power of 2." << endl;

    return 0;
}
