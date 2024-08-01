/*
Assignment 08
Task 1.0
Write a C++ program to capitalise the first letter of each word in a given string.
Words must be separated by only one space

*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1="this is my new string ";
    for(int i=0; i<s1.length();i++ )
    {
        if(i ==  0 || s1[i-1] == ' ')
        {
            if (s1[i] >= 'a' && s1[i] <= 'z')
            {
                s1[i]= s1[i]-32;
            } 
        }
    }
    cout<<s1<<endl;
    return 0;

}

