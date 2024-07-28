/*
*******************
Assignment 05
Task 2.1
A recursive function to calculate the factorial of a number

*/

#include <iostream>
using namespace std;
int sumArray(int arr[], int n)
{
    int sum=0;
    for(int i=0; i < n; i++)
    {
        sum=arr[i]+sumArray(arr, n-1);
    }
    return sum;
}
int main()
{
    int size;
    cout<<"Enter size of the array: "<<endl;
    cin>>size;
    int *arr= new int[size];
    
    for(int i=0; i< size; i++ )
    {
        cout<<"Enter value "<<i<<": ";
        cin>>arr[i];
    }
    cout<<"Sum of the array is "<<sumArray(arr, size);
    return 0;
}