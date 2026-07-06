/*
Operators in C++

This program demonstrates the use of arithmetic, relational,
and logical operators in C++ with simple examples.
*/

#include <iostream>
using namespace std;

int main() {

    // Declaring two integer variables
    int a = 10, b = 20;

    // Arithmetic Operators
    cout << "Sum of a and b is: " << a + b << endl;
    cout << "Difference of a and b is: " << a - b << endl;
    cout << "Product of a and b is: " << a * b << endl;
    cout << "Division of a and b is: " << a / b << endl;
    cout << "Modulus of a and b is: " << a % b << endl;

    // Relational Operators (Returns 1 for true and 0 for false)
    cout << "Is a equal to b? " << (a == b) << endl;
    cout << "Is a not equal to b? " << (a != b) << endl;
    cout << "Is a greater than b? " << (a > b) << endl;
    cout << "Is a less than b? " << (a < b) << endl;
    cout << "Is a greater than or equal to b? " << (a >= b) << endl;
    cout << "Is a less than or equal to b? " << (a <= b) << endl;

    // Logical Operators
    cout << "Logical AND of a and b: " << (a && b) << endl;
    cout << "Logical OR of a and b: " << (a || b) << endl;
    cout << "Logical NOT of a: " << (!a) << endl;

    return 0;
}