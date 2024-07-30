/*
Assignment 07
Task 2.0.4
Create an integer array using Dynamic Memory allocation using new operator.
Then create separate functions for each of the operations mentioned below.
find the largest integer


*/
#include<iostream>
using namespace std;
void findLarghest(int arr[], int size) 
{
    int max=arr[0];
    for(int i =0; i<size; i++)
    {
        
       if(arr[i]>max)
       {
        max=arr[i];
       }
       
    }
    cout<<"Largest number is: "<<max<<endl;
   
}
int main()
{
    int size;
    cout<<"Enter size of the array: "<<endl;
    cin>>size;
    int *arr= new int[size];
    for(int i =0; i<size; i++)
    {
        cout<<"Enter value: "<<i<<endl;
        cin>>arr[i];
        
    }
    
    findLarghest(arr, size);

    delete[] arr;

    return 0;

}

