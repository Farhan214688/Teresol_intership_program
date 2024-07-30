/*
Assignment 07
Task 2.1.3
Create an array of strings using Dynamic Memory allocation using malloc/calloc
function. Then create separate functions for each of the operations mentioned below.

search for a specific string in the array



*/
#include<iostream>
#include <cstdlib>
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
    int size,element;
    cout<<"Enter size of the array: "<<endl;
    cin>>size;
    int *ptr=(int* )malloc(size * sizeof(int));
    for(int i =0; i<size; i++)
    {
        cout<<"Enter value: "<<i<<endl;
        cin>>ptr[i];
        
    }
    
    cout<<"Enter the element of find in the array: "<<endl;
    cin>>element;
    Search(ptr, size, element);

    free(ptr);

    return 0;

}

