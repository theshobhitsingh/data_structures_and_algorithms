#include <iostream>

// Abstract base class
class Animal {
public:
    virtual void makeSound() const = 0; // Pure virtual function
};

// Derived class: Dog
class Dog : public Animal {
public:
    void makeSound() const override {
        std::cout << "Woof! Woof!" << std::endl;
    }
};

// Derived class: Cat
class Cat : public Animal {
public:
    void makeSound() const override {
        std::cout << "Meow! Meow!" << std::endl;
    }
};

int main() {
    Dog dog;
    Cat cat;

    dog.makeSound(); // Output: Woof! Woof!
    cat.makeSound(); // Output: Meow! Meow!

    // Create pointer to Animal object
    Animal* animalPtr ;

    // Point to a Dog object
    animalPtr = &dog;
    animalPtr->makeSound(); // Output: Woof! Woof!

    // Point to a Cat object
    animalPtr = &cat;
    animalPtr->makeSound(); // Output: Meow! Meow!

    return 0;
}

