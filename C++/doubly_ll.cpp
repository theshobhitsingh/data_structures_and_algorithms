#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *prev;
    Node *next;
};

class DoublyLinkedList
{
private:
    Node *head;

public:
    DoublyLinkedList()
    {
        head = nullptr;
    }

    void insert(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;

        if (head == nullptr)
        {
            newNode->prev = nullptr;
            head = newNode;
        }
        else
        {
            Node *current = head;
            while (current->next != nullptr)
            {
                current = current->next;
            }
            current->next = newNode;
            newNode->prev = current;
        }
    }

    void display()
    {
        Node *current = head;
        cout << "Doubly Linked List: ";
        while (current != nullptr)
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    void deleteNode(int value)
    {
        if (head == nullptr)
        {
            cout << "List is empty. Cannot delete." << endl;
            return;
        }

        Node *current = head;

        while (current != nullptr && current->data != value)
        {
            current = current->next;
        }

        if (current == nullptr)
        {
            cout << "Value not found in the list." << endl;
            return;
        }

        if (current->prev != nullptr)
        {
            current->prev->next = current->next;
        }
        else
        {
            head = current->next;
        }

        if (current->next != nullptr)
        {
            current->next->prev = current->prev;
        }

        delete current;
        cout << "Deleted: " << value << endl;
    }
};

int main()
{
    DoublyLinkedList myList;

    int choice, value;

    while (true)
    {
        cout << "1. Insert\n2. Display\n3. Delete\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to insert: ";
            cin >> value;
            myList.insert(value);
            break;
        case 2:
            myList.display();
            break;
        case 3:
            cout << "Enter value to delete: ";
            cin >> value;
            myList.deleteNode(value);
            break;
        case 4:
            return 0;
        default:
            cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}
