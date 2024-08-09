#include <iostream>
using namespace std;
class ll
{
private:
    int data;
    ll *next;

public:
    ll()
    {
        data = 0;
        next = nullptr;
    }
    ll(int d, ll *n)
    {
        data = d;
        next = n;
    }
    void setData(int d)
    {
        data = d;
    }
    void setNext(ll *n)
    {
        next = n;
    }
    int getData()
    {
        return data;
    }
    ll *getNext()
    {
        return next;
    }
    void insertNodeAtFirst(int d)
    {
        ll *newNode = new ll(d, nullptr);
        newNode->setNext(next);
        next = newNode;
    }
};

int main()
{
    int num, v;
    cout << "Enter the size of LinkedList: " << endl;
    cin >> num;

    ll *head = nullptr;
    ll *current = nullptr;

    cout << "Enter the values of nodes: " << endl;
    for (int i = 0; i < num; i++)
    {
        cin >> v;
        if (head == nullptr)
        {
            head = new ll(v, nullptr);
            current = head;
        }
        else
        {
            current->setNext(new ll(v, nullptr));
            current = current->getNext();
        }
    }

    cout << "The nodes of the Linked List: " << endl;
    current = head;

    while (current != nullptr)
    {
        cout << current->getData() << " -> ";
        current = current->getNext();
    }

    int newData;
    cout << "\nEnter data for the new node to insert at the first position: ";
    cin >> newData;
    head->insertNodeAtFirst(newData);

    cout << "Updated Linked List after inserting at the first position: " << endl;
    current = head;
    while (current != nullptr)
    {
        cout << current->getData() << " -> ";
        current = current->getNext();
    }

    current = head;
    while (current != nullptr)
    {
        ll *temp = current;
        current = current->getNext();
        delete temp;
    }

    return 0;
}
