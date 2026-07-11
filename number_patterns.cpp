/*
Number Patterns

This program prints two different number patterns using nested loops:
1. Numbers from 1 to n in every row.
2. Continuous numbers in a square pattern.
*/

#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter the number of lines: ";
    cin >> n;

    // Pattern 1: Print numbers from 1 to n in each row
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << j << "\t";
        }
        cout << endl;
    }

    int m, num = 1;

    cout << "Enter the number of lines: ";
    cin >> m;

    // Pattern 2: Print continuous numbers in a square pattern
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= m; j++) {
            cout << num << "\t";
            num++;
        }
        cout << endl;
    }

    return 0;
}