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
};
int main()
{
    ll *first = new ll();
    ll *second = new ll();
    ll *third = new ll();
    ll *fourth = new ll();
    ll *fifth = new ll();

    first->setData(100);
    second->setData(212);
    third->setData(223);
    fourth->setData(3333);
    fifth->setData(4001);
    
    first->setNext(second);
    second->setNext(third);
    third->setNext(fourth);
    fourth->setNext(fifth);
    fifth->setNext(nullptr);

    ll *current = first;

    while (current != nullptr)
    {
        cout << current->getData() << endl;
        current = current->getNext()v;
    }

    delete first;
    delete second;
    delete third;
    delete fourth;
    delete fifth;

    return 0;
}
