/*
*******************
Assignment 06
Task 1.x.3
print array elements with the addresses using
pointer
*/

#include<iostream>
using namespace std;
int printElements(int arr[], int size)
{
  for(int i =0; i<size; i++)
    {
       
        cout << "Element: "<<arr[i]<<" Address: "<<&arr[i]<<endl;
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


    

    return 0;


}
