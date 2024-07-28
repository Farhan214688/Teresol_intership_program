/*
*******************
Assignment 05
Task 2.2
a C++ program to find the sum of all elements in an array using recursion.



*/

#include <iostream>
using namespace std;
int factorial(int n)
{
    int f=1;
    if(n>1)
    {
        f= n*factorial(n-1);
        return f;

       
    }
    else 
    {
        return 1;

    }

}
int main()
{
    int n;
    cout<<"Enter a number to find the factorial of the number: "<<endl;
    cin>>n;
    cout<<"Factorial is "<<factorial(n)<<endl;


}