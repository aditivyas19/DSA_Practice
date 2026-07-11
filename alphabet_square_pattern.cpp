/*
Alphabet Square Pattern

This program prints a square pattern of uppercase alphabets.
Each row contains the alphabets from A up to the given size.
*/

#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter a number: ";
    cin >> n;

    // Print the alphabet pattern using nested loops
    for (int i = 1; i <= n; i++) {

        char ch = 'A';

        for (int j = 1; j <= n; j++) {
            cout << ch;
            ch++;
        }

        cout << endl;
    }

    return 0;
}