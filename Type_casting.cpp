/*
Type Conversion and Type Casting

This program demonstrates the difference between implicit type conversion
and explicit type casting in C++.
*/

#include <iostream>
using namespace std;

int main() {

    // Implicit Type Conversion
    // The compiler automatically converts an int to a float.
    int a = 10;
    float b = a;

    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;

    // Explicit Type Casting
    // The programmer manually converts a float to an int.
    float c = 9.78f;
    int d = (int)c;

    cout << "Value of c: " << c << endl;
    cout << "Value of d: " << d << endl;

    return 0;
}