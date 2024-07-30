/*
Assignment 07
Task 2.0.3
Create an integer array using Dynamic Memory allocation using new operator.
Then create separate functions for each of the operations mentioned below.
search for a specific element


*/
#include<iostream>
using namespace std;
void Search(int arr[], int size, int element ) 
{
    bool found=false;
    for(int i =0; i<size; i++)
    {
       if(arr[i]==element)
       {
        found = true;
        cout<<"Element found at index: "<<i<<endl;
       }
       
    }
    if(found==false)
    {
        cout<<"Element not found: "<<endl;
    }
}
int main()
{
    int size,element ;
    cout<<"Enter size of the array: "<<endl;
    cin>>size;
    int *arr= new int[size];
    for(int i =0; i<size; i++)
    {
        cout<<"Enter value: "<<i<<endl;
        cin>>arr[i];
        
    }
    cout<<"Enter the element of find in the array: "<<endl;
    cin>>element;
    Search(arr, size, element);

    delete[] arr;

    return 0;

}

