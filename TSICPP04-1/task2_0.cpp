/*
*******************
Assignment 06
Task 2.0
program to dynamically allocate memory for an integer pointer


*/
#include <iostream>
using namespace std;
int main()
{
    int *ptr= new int;

    *ptr=45;
    cout<<"Value stored at pointer address: "<<*ptr<<endl;
    delete ptr;
    

    return 0;
}
