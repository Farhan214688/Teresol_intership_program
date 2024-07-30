/*
Assignment 07
Task 2.0.1
Create an integer array using Dynamic Memory allocation using new operator.
Then create separate functions for each of the operations mentioned below.
● print the array

*/
#include<iostream>
using namespace std;
int printElements(int arr[], int size)
{
  for(int i =0; i<size; i++)
    {
       
        cout << "Element: "<<arr[i]<<endl;
    }
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
    printElements(arr, size);

    delete[] arr;

    return 0;

}

