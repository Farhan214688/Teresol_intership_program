/*
*******************
Assignment 04

Task 2.4
function that takes an integer as input and returns its factorial.


*/
#include<iostream>
using namespace std;
int factorail(int n)
{
    int fac=1;
    for(int i =1; i<=n; i++)
    {
        fac= fac*i;
    }
    return fac;

}
int main()
{
    
    cout<<"Enter a number to print the factorial : "<<endl;
    int f;
    cin>>f;
    cout<<"Factorial is "<<factorail(f)<<endl;

}