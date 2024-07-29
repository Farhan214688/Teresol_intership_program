/*
*******************
Assignment 06
Task 1.x.8
search for an element in array using pointers


*/
#include <iostream>
using namespace std;
void searchElement(int *arr, int size, int element) 
{
    bool found=false;
    for(int i=0; i<7; i++)
    {
        if (*(arr + i) == element) 
        { 
            found = true;
            cout << "Element " << element << " found at index " << i << endl;
            
        }
            
    }
    

}

int main()
{
    int arr[7];
    for(int i=0; i<7; i++)
    {
        cout<<"Enter value: "<<i<<endl;
        cin>>arr[i];
            
    }
    int search;
    cout<<"Search element in the array: "<<endl;
    cin>>search;
    searchElement(arr,7,search);

    return 0;
}
