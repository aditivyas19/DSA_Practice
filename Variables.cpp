/*
Program: Variables and Data Types

This program declares variables of different data types in C++ and
prints their values along with the memory occupied by each using sizeof().
*/

#include<iostream>
using namespace std;

int main(){

    // Declaring variables of different data types
    int a = 25;
    char grade = 'A';
    float b = 25.5f;
    bool isTrue = true;
    double c = 25.55;

    // Displaying the value and size of each variable
    cout << "Integer value: " << a << " and size: " << sizeof(a) << endl;
    cout << "Character value: " << grade << " and size: " << sizeof(grade) << endl;
    cout << "Float value: " << b << " and size: " << sizeof(b) << endl;
    cout << "Boolean value: " << isTrue << " and size: " << sizeof(isTrue) << endl;
    cout << "Double value: " << c << " and size: " << sizeof(c) << endl;

    return 0;
}