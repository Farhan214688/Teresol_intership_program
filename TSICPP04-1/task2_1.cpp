/*
*******************
Assignment 06
Task 2.1
Write a program that dynamically allocates memory for an array of integers of size
n, initializes the array, and then frees the memory.


*/
#include <iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter size of the arry: "<<endl;
    cin>>size;
    int* arr= new int[size];
    for(int i=0; i<size; i++)
    {
        cout<<"Enter value: "<<i<<endl;
        cin>>arr[i];
    }
    for(int i=0; i<size; i++)
    {
        cout<<"value at "<<i<<" index: "<<endl;
        cout<<arr[i]<<endl;
    }
    delete[] arr;
    return 0;
}
