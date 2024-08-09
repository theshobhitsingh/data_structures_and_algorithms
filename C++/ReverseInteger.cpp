#include <iostream>
using namespace std;
int main()
{
    int digit, n, ans = 0;
    cout << "Enter the number to find reverse: ";
    cin >> n;
    int org=n;
    while (n != 0)
    {
        digit = n % 10;
        ans = (ans * 10) + digit;
        n = n / 10;
    }
    cout << "The reverse of the number" << org << "is" << ans <<"."<<endl;
    return 0;
}
