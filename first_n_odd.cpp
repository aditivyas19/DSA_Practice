/*
Sum of First N Odd Numbers

This program calculates the sum of the first n
odd numbers using a loop.
*/

#include <iostream>
using namespace std;

int main() {

    int n, sum = 0, count = 1;

    cout << "Enter the value of n: ";
    cin >> n;

    // Add the first n odd numbers
    for (int i = 1; count <= n; i++) {
        if (i % 2 != 0) {
            sum += i;
            count++;
        }
    }

    cout << "The sum of first " << n << " odd numbers is: " << sum << endl;

    return 0;
}