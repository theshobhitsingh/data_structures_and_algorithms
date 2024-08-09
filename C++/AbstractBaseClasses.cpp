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

    friend double getTotalArea(const Rectangle& rect); // Friend function declaration
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

    friend double getTotalArea(const Circle& circle); // Friend function declaration
};

// Friend function definition for Rectangle
double getTotalArea(const Rectangle& rect) {
    return rect.width * rect.height;
}

// Friend function definition for Circle
double getTotalArea(const Circle& circle) {
    return 3.14159 * circle.radius * circle.radius;
}

int main() {
    // Create objects of derived classes
    Rectangle rectangle(5.0, 3.0);
    Circle circle(2.5);

    // Call functions using objects
    rectangle.printInfo();
    std::cout << "Area: " << getTotalArea(rectangle) << std::endl;

    circle.printInfo();
    std::cout << "Area: " << getTotalArea(circle) << std::endl;

    return 0;
}

