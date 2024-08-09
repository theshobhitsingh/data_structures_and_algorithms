#include <iostream>
using namespace std;
int main() {
    string str;
    char ch;
    int freq = 0;
    cout << "Enter a string: ";
    cin>>str;
    cout << "Enter a character: ";
    cin >> ch;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == ch) {
            freq++;
        }
    }
    
    cout << "The frequency of '" << ch << "' in the string is: " << freq << endl;
    
    return 0;
}
