/*
*******************
Assignment 04
Task 1.3
Write a program in C to demonstrate the behaviour of extern variables.

*/
#include<iostream>
using namespace std;
extern int a;
int main()
{
    
    cout<<"Value of external variable is: "<<endl;
    cout<<a<<endl;
}