#include <iostream>
using namespace std;

template<class T>
class Calculator {
private:
    T num1, num2;

public:
    Calculator(T n1, T n2) {
        num1 = n1;
        num2 = n2;
    }

    void display() {
        cout << "The numbers are: " << num1 << " " << num2 << endl;
        cout << "The addition of the given numbers is: " << add() << endl;
        cout << "The subtraction of the given numbers is: " << sub() << endl;
        cout << "The multiplication of the given numbers is: " << mul() << endl;
        cout << "The division of the given numbers is: " << div() << endl;
	   // cout << "The modulo of the given numbers is: " << mod() << endl;
    }

    T add() { return num1 + num2; }
    T sub() { return num1 - num2; }
    T mul() { return num1 * num2; }
    T div() { return num1 / num2; }
  //  T mod() { return num1 % num2; }
};

int main() {
    Calculator<int> obj1(12, 20);
    Calculator<float> obj2(2.5, 3.5);

    cout << "int results:" << endl;
    obj1.display();

    cout << "float results:" << endl;
    obj2.display();

    return 0;
}

