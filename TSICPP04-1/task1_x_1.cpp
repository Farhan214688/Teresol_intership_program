/*
*******************
Assignment 06
Task 1.x.1
swap two numbers using pointers

*/

#include<iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp; // Temporary variable to hold one value
    temp = *a; // Store the value pointed to by a in temp
    *a = *b;   // Assign the value pointed to by b to the location pointed to by a
    *b = temp; // Assign the value stored in temp to the location pointed to by b
}
int main()
{
    int a,b;
    cout<<"Enter two numbers to Swap : "<<endl;
    cout<<"  *********"<<endl;
    cout<<"Number 1: "<<endl;
    cin>>a;
    cout<<"Number 2: "<<endl;
    cin>>b; 
    cout<<"Before swap A and B is: "<<endl <<a<<endl<<b<<endl;
    swap(&a,&b);

    cout<<"After swap A and B is: "<<endl <<a<<endl<<b<<endl;

    return 0;


}
