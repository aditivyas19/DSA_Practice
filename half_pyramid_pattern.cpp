/*
Half Pyramid Pattern

This program prints a half pyramid of stars using nested for loops.
The number of rows is taken as input from the user.
*/

#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter the number of lines: ";
    cin >> n;

    // Outer loop controls the number of rows
    for (int i = 1; i <= n; i++) {

        // Inner loop prints stars for each row
        for (int j = 1; j <= i; j++) {
            cout << "*" << "\t";
        }

        cout << endl;
    }

    return 0;
}