#include <iostream>
using namespace std;

int stk[1000];
int top = -1;

void push(int value)
{
    if (top == 999)
    {
        cout << "Stack is full. Cannot insert more elements." << endl;
    }
    else
    {
        top++;
        stk[top] = value;
        cout << "Element " << value << " has been inserted into the stack." << endl;
    }
}

void pop()
{
    if (top == -1)
    {
        cout << "Stack is empty. Cannot delete an element." << endl;
    }
    else
    {
        cout << "Element " << stk[top] << " has been deleted from the stack." << endl;
        top--;
    }
}

void peek()
{
    if (top == -1)
    {
        cout << "Stack is empty. No elements to print." << endl;
    }
    else
    {
        cout << "Top element: " << stk[top] << endl;
    }
}

void display()
{
    if (top == -1)
    {
        cout << "Stack is empty. Nothing to display." << endl;
    }
    else
    {
        cout << "Stack elements: ";
        for (int i = 0; i <= top; i++)
        {
            cout << stk[i] << " ";
        }
        cout << endl;
    }
}

int getSize()
{
    return top + 1;
}

int main()
{
    int choice;
    while (true)
    {
        cout << "Enter your choice:" << endl;
        cout << "1. Insert an element into the stack" << endl;
        cout << "2. Delete an element from the stack" << endl;
        cout << "3. Print the top element" << endl;
        cout << "4. Display all elements in the stack" << endl;
        cout << "5. Get the size of the stack" << endl;
        cout << "6. Exit" << endl;
        cin >> choice;
        cout << choice;

        switch (choice)
        {
        case 1:
            int value;
            cout << "Enter the value to insert: ";
            cin >> value;
            push(value);
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            cout << "Stack size: " << getSize() << endl;
            break;
        case 6:
            return 0;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
