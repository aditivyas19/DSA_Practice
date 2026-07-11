/*
Alphabet Triangle Pattern

This program prints a triangle pattern where each row
contains the same alphabet, starting from 'A'.
*/

#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter a number: ";
    cin >> n;

    char ch = 'A';

    // Print the alphabet triangle
    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= i; j++) {
            cout << ch << "\t";
        }

        // Move to the next alphabet for the next row
        ch++;

        cout << endl;
    }

    return 0;
}