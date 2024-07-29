/*
*******************
Assignment 06
Task 2.2
Write a program that dynamically allocates memory for an array of integers,
initializes it with values, prints the array, and then deallocates the memory. Your program
should ask for the size of array and then the values to plug into that array


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
