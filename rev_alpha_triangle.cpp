/*
Reverse Alphabet Triangle

This program prints a triangle pattern where each row
starts with the current alphabet and prints in reverse order.
*/

#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter a number: ";
    cin >> n;

    // Print the reverse alphabet triangle
    for (int i = 0; i < n; i++) {

        char ch = 'A' + i;

        for (int j = 0; j <= i; j++) {
            cout << ch;
            ch--;
        }

        cout << endl;
    }

    return 0;
}