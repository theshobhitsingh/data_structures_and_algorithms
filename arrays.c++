
#include <iostream>
using namespace std;

int main()
{
    // // Array Declaration
    // int arr[100];
    // char ch[20];
    // bool flag[10];
    // long l[1000];
    // short s[5];

    // cout << "Array is created successfully." << endl;

    // int a = 10;
    // char b = 'A';
    // cout << "The address of a is: " << &a << endl;
    // cout << "The size of a is: " << sizeof(a) << endl;
    // cout << "The address of b is: " << &b << endl;
    // cout << "The size of b is: " << sizeof(b) << endl;
    // cout << "The base address of Array arr is: " << &arr << endl;
    // cout << "The size of arr is: " << sizeof(arr) << endl;
    // cout << "The base address of Array arr is: " << arr << endl;
    // cout << "The size of ch is: " << sizeof(ch) << endl;

    // // Array Initialisation
    // int array[5] = {1, 2, 3, 4, 5};
    // int brr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int crr[10] = {100, 200, 500};
    // int drr[3] = {1, 99, 56};

    // cout << array[0] << endl;
    // cout << array[1] << endl;
    // cout << array[2] << endl;
    // cout << array[3] << endl;
    // cout << array[4] << endl;

    // int n = 5;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << array[i] << " ";
    // }
    // cout << endl;
    // cout << endl;
    // Taking input in an Array
    int newArray[5];
    int num = 5;
    for (int i = 0; i < num; i++)
    {
        cout << "Enter the value of " << i << " index: ";
        cin >> newArray[i];
    }
    cout << endl;
    // Printing the elements of an Array
    cout << "The elements of the array are: " << endl;
    for (int i = 0; i < num; i++)
    {
        cout << newArray[i] << " ";
        }
    cout<<endl;
    // Printing the elements of an Array after doubling each value
    cout << "The values after doubling each element of the Array: " << endl;
    for (int i = 0; i < num; i++)
    {
        newArray[i] = 2 * newArray[i];
        cout << newArray[i] << " ";
    }
cout<<endl;
    // Printing the sum of all the elements of an Array
    int sum = 0;
    for (int i = 0; i < num; i++)
    {
        sum = sum + newArray[i];
    }
     cout <<"The sum of all the elements of the Array is: "<< sum << " ";
    return 0;
}