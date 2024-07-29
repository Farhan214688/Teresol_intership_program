/*
*******************
Assignment 06
Task 1.x.2
add two numbers using pointers

*/

#include<iostream>
using namespace std;
int Add(int *a, int *b)
{
    int result= *a+*b;
    return result;
}
int main()
{
    int a,b;
    cout<<"Enter two numbers to for addition : "<<endl;
    cout<<"  *********"<<endl;
    cout<<"Number 1: "<<endl;
    cin>>a;
    cout<<"Number 2: "<<endl;
    cin>>b; 

    cout<<"Result is : "<<Add(&a,&b)<<endl;

    return 0;


}
