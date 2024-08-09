#include <iostream>
using namespace std;

class Student
{
private:
    int marks[5];

public:
    void inputMarks()
    {
        cout << "Enter the marks of 5 subjects: ";
        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
        }
    }

    int getMaxMarks()
    {
        int mx = marks[0];
        for (int i = 1; i < 5; i++)
        {
            if (mx < marks[i])
                mx = marks[i];
        }
        return mx;
    }

    float getAverageMarks()
    {
        int total = 0;
        for (int i = 0; i < 5; i++)
        {
            total += marks[i];
        }
        return static_cast<float>(total) / 5.0;
    }
};

int main()
{
    Student s;
    s.inputMarks();
    
    int maxMarks = s.getMaxMarks();
    cout << "The maximum marks is: " << maxMarks << endl;
    
    float avgMarks = s.getAverageMarks();
    cout << "The average marks is: " << avgMarks << endl;

    return 0;
}

