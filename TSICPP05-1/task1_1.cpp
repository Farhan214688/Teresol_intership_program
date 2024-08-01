/*
Assignment 08
Task 1.1

Write a program that copies a string from one char pointer to another. Make sure
to handle null-termination correctly to avoid common errors.
Example:
Input: "Hello, World!"
Output: "Hello, World!"

*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
    char* s1= "This is original string ";
    char* s2= s1;
    cout<<s2;
    return 0;

}

