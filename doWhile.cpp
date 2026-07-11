/*
Do-While Loop

This program uses a do-while loop to print numbers from 1 to 10.
The loop executes at least once before checking the condition.
*/

#include <iostream>
using namespace std;

int main() {

    int n = 10;
    int i = 1;

    // Execute the loop first, then check the condition
    do {
        cout << i << endl;
        i++;
    } while (i <= n);

    return 0;
}