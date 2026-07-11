/*
Sum of Odd Numbers

This program calculates the sum of all odd numbers
from 0 to the given number.
*/

#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter any number: ";
    cin >> n;

    int sum = 0;

    // Add only the odd numbers from 0 to n
    for (int i = 0; i <= n; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }

    cout << "The sum of odd numbers from 0 to " << n << " is: " << sum << endl;

    return 0;
}