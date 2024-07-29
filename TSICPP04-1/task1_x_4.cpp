/*
*******************
Assignment 06
Task 1.x.4
Change the value of a constant integer using pointers

*/
#include <iostream>
using namespace std;

void changeValue(int *n) {
    cout << "Enter a new value: ";
    cin >> *n;
}

int main() {
    const int integer = 234; // Change to a non-const integer
    cout << "Value before change: " << integer << endl;
    changeValue(&integer);
    cout << "Value After change: " << integer << endl;

    return 0;
}
