/*
Odd and Even Number Check

This program checks whether the entered integer
is even or odd using the modulus operator.
*/

#include <iostream>
using namespace std;

int main() {

    int a;

    cout << "Enter an integer: ";
    cin >> a;

    // Check if the number is divisible by 2
    if (a % 2 == 0) {
        cout << a << " is an even number." << endl;
    } else {
        cout << a << " is an odd number." << endl;
    }

    return 0;
}