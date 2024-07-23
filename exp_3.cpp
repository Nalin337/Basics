#include <iostream>
using namespace std;

int main() {
    int num1 = 10;
    int num2 = 5;

    // Arithmetic Operators
    int result = num1 + num2;  // Addition
    cout << "num1 + num2 = " << result << endl;

    result = num1 - num2;  // Subtraction
    cout << "num1 - num2 = " << result << endl;

    result = num1 * num2;  // Multiplication
    cout << "num1 * num2 = " << result << endl;

    result = num1 / num2;  // Division
    cout << "num1 / num2 = " << result << endl;

    result = num1 % num2;  // Modulus
    cout << "num1 % num2 = " << result << endl;

    // Assignment Operators
    num1 += num2;  // num1 = num1 + num2;
    cout << "After num1 += num2, num1 = " << num1 << endl;

    num1 -= num2;  // num1 = num1 - num2;
    cout << "After num1 -= num2, num1 = " << num1 << endl;

    num1 *= num2;  // num1 = num1 * num2;
    cout << "After num1 *= num2, num1 = " << num1 << endl;

    num1 /= num2;  // num1 = num1 / num2;
    cout << "After num1 /= num2, num1 = " << num1 << endl;

    num1 %= num2;  // num1 = num1 % num2;
    cout << "After num1 %= num2, num1 = " << num1 << endl;

    // Comparison Operators
    bool isEqual = (num1 == num2);
    cout << "num1 == num2: " << (isEqual ? "True" : "False") << endl;

    bool isNotEqual = (num1 != num2);
    cout << "num1 != num2: " << (isNotEqual ? "True" : "False") << endl;

    bool isGreater = (num1 > num2);
    cout << "num1 > num2: " << (isGreater ? "True" : "False") << endl;

    bool isLesser = (num1 < num2);
    cout << "num1 < num2: " << (isLesser ? "True" : "False") << endl;

    bool isGreaterEqual = (num1 >= num2);
    cout << "num1 >= num2: " << (isGreaterEqual ? "True" : "False") << endl;

    bool isLesserEqual = (num1 <= num2);
    cout << "num1 <= num2: " << (isLesserEqual ? "True" : "False") << endl;

    // Logical Operators
    bool andResult = (num1 > 5) && (num2 < 10);
    cout << "(num1 > 5) && (num2 < 10): " << (andResult ? "True" : "False") << endl;

    bool orResult = (num1 > 5) || (num2 < 10);
    cout << "(num1 > 5) || (num2 < 10): " << (orResult ? "True" : "False") << endl;

    bool notResult = !(num1 > 5);
    cout << "!(num1 > 5): " << (notResult ? "True" : "False") << endl;

    // Bitwise Operators
    int bitwiseAnd = num1 & num2;
    cout << "num1 & num2 = " << bitwiseAnd << endl;

    int bitwiseOr = num1 | num2;
    cout << "num1 | num2 = " << bitwiseOr << endl;

    int bitwiseXor = num1 ^ num2;
    cout << "num1 ^ num2 = " << bitwiseXor << endl;

    int bitwiseNot = ~num1;
    cout << "~num1 = " << bitwiseNot << endl;

    return 0;
}
