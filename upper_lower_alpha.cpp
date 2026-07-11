/*
Uppercase Letter Check

This program checks whether the entered character
is an uppercase English letter or not.
*/

#include <iostream>
using namespace std;

int main() {

    char ch;

    cout << "Enter any character: ";
    cin >> ch;

    // Check if the character lies between 'A' and 'Z'
    if (ch >= 'A' && ch <= 'Z') {
        cout << ch << " is an uppercase letter." << endl;
    } else {
        cout << ch << " is not an uppercase letter." << endl;
    }

    return 0;
}