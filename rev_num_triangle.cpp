/*
Reverse Number Triangle

This program prints a triangle pattern where each row
contains numbers in decreasing order.
*/

#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter a number: ";
    cin >> n;

    // Print the reverse number triangle
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}