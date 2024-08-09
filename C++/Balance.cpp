#include <iostream>
#include <string>
using namespace std;
struct Customer{
    string name;
    int accountNumber;
    float balance;
};
void printLowBalanceCustomers(Customer customers[], int n) {
    cout << "Customers with balance less than $200:" << endl;
    for (int i = 0; i < n; i++) {
        if (customers[i].balance < 200.0) {
            cout << customers[i].name << endl;
        }
    }
}
void addHundredDollars(Customer customers[], int n) {
    cout << "New balances for customers with more than $1000:" << endl;
    for (int i = 0; i < n; i++) {
        if (customers[i].balance > 1000.0) {
            customers[i].balance += 100.0;
            cout << customers[i].name << ": $" << customers[i].balance << endl;
        }
    }
}
int main(){
    int n;
    cout << "Enter the number of customers: ";
    cin >> n;
    Customer *customers = new Customer[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter the name of customer " << i+1 << ": ";
        cin >> customers[i].name;
        cout << "Enter the account number of customer " << i+1 << ": ";
        cin >> customers[i].accountNumber;
        cout << "Enter the balance of customer " << i+1 << ": $";
        cin >> customers[i].balance;
    }
    printLowBalanceCustomers(customers, n);
    addHundredDollars(customers, n);
    delete[] customers;
    return 0;
}





