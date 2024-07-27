
/*
*******************
Assignment 04
Task 1.2
: Write a program in C to demonstrate the behaviour of const variables.
*/

#include<iostream>
using namespace std;
int get_Size()
{
    int size;
    cout<<"Enter size: "<<endl;
    cin>>size;
    return size;

}
int modify(const int x)
{
    //x=21;  error: assignment of read-only parameter 'x'
    cout<<"Value after modification "<<endl;
    cout<<x<<endl;
    return x;
}
int main()
{
    const int a=get_Size();
    cout<<"value of a is: "<<a<<endl;
    
    modify(a);



}