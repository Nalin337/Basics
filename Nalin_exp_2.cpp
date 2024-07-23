#include <iostream>

int main() {
    std::cout << "Hello World!\n";

    std::cout << "Let us print the sum of two numbers" << std::endl;
    int a, b; 
    std::cout << "Enter a: " << std::endl;
    std::cin >> a;
    std::cout << "Enter b: " << std::endl;
    std::cin >> b;
    int sum = a + b;
    std::cout << "The sum of the two numbers is: " << sum << std::endl;
    int avg = (a + b) / 2;
    std::cout << "The average is: " << avg << std::endl;

    // Now check if entered number is even or odd
    int c;
    std::cout << "Enter c: " << std::endl;
    std::cin >> c;
    if (c % 2 == 0) {
        std::cout << c << " is even." << std::endl;
    } else {
        std::cout << c << " is odd." << std::endl;
    }

    // Check for leap year
    int d;
    std::cout << "Enter d: " << std::endl;
    std::cin >> d;
    if ((d % 4 == 0 && d % 100 != 0) || d % 400 == 0) {
        std::cout << d << " is a leap year." << std::endl;
    } else {
        std::cout << d << " is not a leap year." << std::endl;
    }

    return 0;
}
