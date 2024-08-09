// C++ program to illustrate malloc()
// and new operator in C++
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
};

// Driver Code
int main()
{

	// Create an object of class A
	// using new operator
	A* a = new A;
	cout << "Object of class A was "
		<< "created using new operator!"
		<< endl;

	// Create an object of class A
	// using malloc operator
	A* b = (A*)malloc(sizeof(A));
	cout << "Object of class A was "
		<< "created using malloc()!"
		<< endl;

	return 0;
}

