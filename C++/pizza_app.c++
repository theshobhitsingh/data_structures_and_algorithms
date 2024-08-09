#include <iostream>
#include <vector>
using namespace std;

class Customer {
private:
    string customer_name;
    int quantity;

public:
    Customer(string name, int quty) {
        customer_name = name;
        quantity = quty;
    }

    bool validate_quantity() {
        if (quantity <= 5) {
            return true;
        } else {
            return false;
        }
    }

    string get_customer_name() {
        return customer_name;
    }

    int get_quantity() {
        return quantity;
    }
};

class PizzaService {
private:
    int service_rating;

public:
    PizzaService(int rating) {
        service_rating = rating;
    }

    int get_service_rating() {
        return service_rating;
    }
};

int main() {
    Customer customer("Alice", 3);
    if (customer.validate_quantity()) {
        cout << "Valid quantity for customer: " << customer.get_customer_name() << endl;
    } else {
        cout << "Invalid quantity for customer: " << customer.get_customer_name() << endl;
    }

    PizzaService service(4);
    cout << "Service rating: " << service.get_service_rating() << endl;

    return 0;
}
