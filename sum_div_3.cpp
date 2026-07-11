/*
Sum of Multiples of 3

This program calculates the sum of all multiples
of 3 from 1 to the given number.
*/

#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter any number: ";
    cin >> n;

    int sum = 0;

    // Add all numbers that are divisible by 3
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            sum += i;
        }
    }

    cout << "Sum of multiples of 3 up to " << n << " is: " << sum << endl;

    return 0;
}