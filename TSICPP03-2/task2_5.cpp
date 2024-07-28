/*
*******************
Assignment 05
Task 2.5
a C++ program to find The Fibonacci numbers using recursion.


*/

#include <iostream>
using namespace std;
int fibonacci(int n)
{
    if (n == 0) 
    {
        return 0; 
    }
    else if (n == 1) 
    {
        return 1; 
    }
    else 
    {
        return fibonacci(n - 1) + fibonacci(n - 2); 
    
    }
}
int main()
{
    int n;
    cout << "Enter the position of Fibonacci number to find: ";
    cin >> n;

    if (n < 0) 
    {
        cout << "Please enter a non-negative integer." << endl;
    } 
    else 
    {
        cout << "Fibonacci number at position " << n << " is " << fibonacci(n) << endl;
    }

    return 0;


}