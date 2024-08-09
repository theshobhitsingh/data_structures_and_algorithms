#include <iostream>

// Function to calculate the sum of two integers
int sum(int a, int b) {
    return a + b;
}

// Function to calculate the sum of three integers
int sum(int a, int b, int c) {
    return a + b + c;
}

// Function to calculate the sum of two floating-point numbers
double sum(double a, double b) {
    return a + b;
}

int main() {
    int result1 = sum(2, 3);
    int result2 = sum(4, 5, 6);
    double result3 = sum(1.5, 2.5);

    std::cout << "Result 1: " << result1 << std::endl; // Output: Result 1: 5
    std::cout << "Result 2: " << result2 << std::endl; // Output: Result 2: 15
    std::cout << "Result 3: " << result3 << std::endl; // Output: Result 3: 4

    return 0;
}

