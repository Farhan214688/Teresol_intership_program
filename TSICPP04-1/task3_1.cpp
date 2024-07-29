/*
*******************
Assignment 06
Task 3.1

Write a program that uses a void pointer to store and print different types of data
(int, float, char).
*/
#include <iostream>
using namespace std;
int main()
{
     int intValue = 42;
    float floatValue = 3.14f;
    char charValue = 'A';
    void *ptr;

    cout<<"Int: "<<endl;
    ptr=&intValue;
    cout<< *static_cast<int*>(ptr)<<endl;

    cout<<"float: "<<endl;
    ptr=&floatValue;
    cout<< *static_cast<float*>(ptr)<<endl;

    cout<<"Char: "<<endl;
    ptr=&charValue;
    cout<< *static_cast<char*>(ptr)<<endl;

    return 0;
    
}