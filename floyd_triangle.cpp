/*
Floyd's Triangle

This program prints Floyd's Triangle using consecutive
numbers based on the number of rows entered by the user.
*/

#include <iostream>
using namespace std;

int main() {

    int o, num = 1;

    cout << "Enter a number: ";
    cin >> o;

    // Print Floyd's Triangle
    for (int i = 0; i < o; i++) {
        for (int j = 1; j <= i + 1; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    return 0;
}