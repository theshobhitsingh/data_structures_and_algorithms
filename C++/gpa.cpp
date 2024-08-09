#include <iostream>
using namespace std;
int main()
{
    int n;
    float *gpa;
    cout << "Enter the number of students: ";
    cin >> n;
    gpa = new float[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter the GPA for student " << i+1 << ": ";
        cin >> gpa[i];
    }
    cout << "The GPA for each student is:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Student " << i+1 << ": " << gpa[i] << endl;
    }
    delete[] gpa;
    return 0;
}
