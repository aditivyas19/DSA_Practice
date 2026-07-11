/*
Number Triangle Patterns

This program prints two number triangle patterns:
1. Each row contains the same number.
2. Each row contains numbers from 1 up to the row number.
*/

#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter the number of lines: ";
    cin >> n;

    // Pattern 1: Print the row number in each row
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i << "\t";
        }
        cout << endl;
    }

    int m;

    cout << "Enter the number of lines: ";
    cin >> m;

    // Pattern 2: Print numbers from 1 to the current row number
    for (int k = 0; k < m; k++) {
        for (int l = 1; l <= k + 1; l++) {
            cout << l << "\t";
        }
        cout << endl;
    }

    return 0;
}