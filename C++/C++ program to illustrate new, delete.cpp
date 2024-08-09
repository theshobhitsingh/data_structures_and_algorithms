// C++ program to illustrate new, delete
// malloc() and free()
#include "bits/stdc++.h"
using namespace std;

// Class A
class A {
	int a;

public:
	int* ptr;

	// Constructor of class A
	A()
	{
		cout << "Constructor was Called!"
			<< endl;
	}

	// Destructor of class A
	~A()
	{
		cout << "Destructor was Called!"
			<< endl;
	}
};

// Driver Code
int main()
{

	// Object Created of class A
	A a;
	return 0;
}

