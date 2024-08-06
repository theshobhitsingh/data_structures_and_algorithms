#include<iostream>
using namespace std;

const int MAX_SIZE = 10;

int s[MAX_SIZE];  
int top = -1; 

bool isFull() {
    if (top == MAX_SIZE - 1)
        return true;
    else
        return false;
}

bool isEmpty() {
    if (top == -1)
        return true;
    else
        return false;
}

void push(int val) {
    if (isFull()) {
        cout << "Stack is full. Cannot push " << val << endl;
    } else {
        top++;          
        s[top] = val;
    }
}

void pop() {
    if (isEmpty()) {
        cout << "Stack is empty. Cannot pop." << endl;
    } else {
        top--;  
    }
}

int peek() {
    if (isEmpty()) {
        cout << "Stack is empty. Peek operation failed." << endl;
        return -1;  
    } else {
        return s[top];  
    }
}

int main() {
    push(1);
    push(2);
    push(3);
    
    cout << "Top element: " << peek() << endl;
    
    pop();
    cout << "Top element after pop: " << peek() << endl;
    
    return 0;
}
