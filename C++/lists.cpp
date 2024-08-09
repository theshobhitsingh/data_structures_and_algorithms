#include <iostream>
#include <list>
using namespace std;

int main()
{

    list<int> mylist{12, 45, 8, 6};
    list<int> mylist2{12, 45, 8, 6, 10, 100};
    cout << "The list elmenents are: ";
    for (auto i : mylist)
    {
        cout << i << ' ';
    }
    cout << endl;
    mylist.push_front(0);
    mylist.push_front(1);
    cout << "Elements after updating: ";
    for (auto i : mylist)
    {
        cout << i << ' ';
    }
    cout << endl;

    mylist.reverse();
    cout << "Elements after reversing: ";
    for (auto i : mylist)
    {
        cout << i << ' ';
    }
    cout << endl;

    mylist.sort();
    cout << "Elements after sorting: ";
    for (auto i : mylist)
    {
        cout << i << ' ';
    }
    cout << endl;

    mylist.merge(mylist2);
    cout << "List after merging: ";
    for (auto i : mylist)
    {
        cout << i << ' ';
    }
    cout << endl;
    return 0;
}
