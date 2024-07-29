/*
*******************
Assignment 06
Task 1.0

a function that attempts to modify an integer value by passing it by value.


*/#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers: "<<endl;
    cout<<"  *********"<<endl;
    cout<<"Number 1: "<<endl;
    cin>>a;
    cout<<"Number 2: "<<endl;
    cin>>b; 

    int *ptrA,* ptrB;
    ptrA=&a;
    ptrB=&b;


    cout<<"Value of a stored in Pointer A: "<<* ptrA<<endl;
    cout<<"Value of a stored in Pointer B: "<<* ptrB<<endl;
    return 0;



}