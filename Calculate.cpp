#include <iostream>
using namespace std;
int main() {
    int choice, num1, num2, result;
    char cont;
    do {
        cout << "MENU" << endl;
        cout << "1. Add" << endl;
        cout << "2. Subtract" << endl;
        cout << "3. Multiply" << endl;
        cout << "4. Divide" << endl;
        cout << "5. Modulus" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout << "Enter your two numbers: ";
        cin >> num1 >> num2;
        switch (choice) {
            case 1:
                result = num1 + num2;
                break;
            case 2:
                result = num1 - num2;
                break;
            case 3:
                result = num1 * num2;
                break;
            case 4:
                result = num1 / num2;
                break;
            case 5:
                result = num1 % num2;
                break;
            default:
                cout << "Invalid choice!" << endl;
                continue;
        }
        cout << "Result: " << result << endl;
        cout << "Continue? (y/n): ";
        cin >> cont;
    } while (cont == 'y' || cont == 'Y');
    return 0;
}
