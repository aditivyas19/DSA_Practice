/*
Ternary Operator

This program uses the ternary operator to check whether
a number is positive or negative.
*/

#include <iostream>
using namespace std;

int main() {

    int n = -45;

    // Using the ternary operator to check the sign of the number
    cout << (n >= 0 ? "positive" : "negative") << endl;

    return 0;
}