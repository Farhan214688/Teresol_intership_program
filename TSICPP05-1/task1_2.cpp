/*
Assignment 08
Task 1.2

Write a program that extracts all integers from a given string and prints them.
Example:
Input: "abc123xyz45"
Output: 123 45

*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1="abc123xyz45";
    for(int i=0; i<s1.length();i++ )
    {
        if (s1[i] >= 48 && s1[i] <= 57 )
        {
            cout<<s1[i];
        }
    }
    return 0;

}

