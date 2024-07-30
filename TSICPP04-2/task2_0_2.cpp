/*
Assignment 07
Task 2.0.2
Create an integer array using Dynamic Memory allocation using new operator.
Then create separate functions for each of the operations mentioned below.
get size of an element

*/
#include<iostream>
using namespace std;
void Size(int arr[], int size) {
    cout << "Size of each element in the array is: " << sizeof(int) << " bytes" << endl;
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
    Size(arr, size);

    

    return 0;

}

