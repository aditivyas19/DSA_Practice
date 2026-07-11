/*
Continuous Alphabet Triangle

This program prints a triangle pattern using consecutive
lowercase alphabets.
*/

#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter a number: ";
    cin >> n;

    char ch = 'a';

    // Print the alphabet triangle
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= i + 1; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    return 0;
}