#include <iostream>
#include <string>
using namespace std;

struct Student {
    int admission_number;
    string name;
    string address;
    float marks;
};

int main() {
    Student s;
    
    cout << "Enter admission number: ";
    cin >> s.admission_number;
    
    cout << "Enter name: ";
    cin.ignore();
    getline(cin, s.name);
    
    cout << "Enter address: ";
    getline(cin, s.address);
    
    cout << "Enter marks: ";
    cin >> s.marks;
    
    cout << "\nAdmission Number: " << s.admission_number << endl;
    cout << "Name: " << s.name << endl;
    cout << "Address: " << s.address << endl;
    cout << "Marks: " << s.marks << endl;
    
    return 0;
}
