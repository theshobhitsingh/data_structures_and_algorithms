#include <iostream>
#include <algorithm> 
using namespace std;

int main() 
{
    int size;
    cout << "How many numbers do you want to enter? ";
    cin >> size;
    cout<<"Enter the numbers: "<<endl;
    int* ptr = new int[size];
    for (int i = 0; i < size; i++) {
        int input = 0;
        cin >> input;
        ptr[i] = input;
    }

    for (int i = 0; i < size; i++) {
        cout << "Elements entered are: " << ptr[i] << endl;
    }

    std::sort(ptr, ptr + size);

    cout << "The sorted numbers are: ";
    for (int i = 0; i < size; i++) {
        cout << ptr[i] << " ";
    }
-
    delete[] ptr;
    return 0;
}
