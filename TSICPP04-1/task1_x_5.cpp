/*
*******************
Assignment 06
Task 1.x.5
find length of string using pointer

*/
#include <iostream>
using namespace std;
int findLength(const char* str) 
{
    
    int length = 0;

    while (*str != '\0') 
    {
        length++;
        str++; 
    }

    return length;
}

int main() {
   
    const char* testStr = "Hello, World!";
    int length = findLength(testStr);

    cout << "The length of the string \"" << testStr << "\" is: " << length << endl;

    return 0;
}
