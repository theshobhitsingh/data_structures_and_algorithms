#include <iostream>

// Abstract base class
class Shape {
public:
    virtual double getArea() const = 0; // Pure virtual function
    virtual void printInfo() const = 0; // Pure virtual function
};

// Derived class: Rectangle
class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double getArea() const override {
        return width * height;
    }

    void printInfo() const override {
        std::cout << "Rectangle: width = " << width << ", height = " << height << std::endl;
    }
};

// Derived class: Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double getArea() const override {
        return 3.14159 * radius * radius;
    }

    void printInfo() const override {
        std::cout << "Circle: radius = " << radius << std::endl;
    }
};

int main() {
    // Create objects of derived classes
    Rectangle rectangle(5.0, 3.0);
    Circle circle(2.5);

    // Store objects in Shape pointers
    Shape* shape1 = &rectangle;
    Shape* shape2 = &circle;

    // Call functions using Shape pointers
    shape1->printInfo();
    std::cout << "Area: " << shape1->getArea() << std::endl;

    shape2->printInfo();
    std::cout << "Area: " << shape2->getArea() << std::endl;

    return 0;
}

