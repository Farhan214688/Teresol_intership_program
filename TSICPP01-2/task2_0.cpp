#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the size of array: "<<endl;
    int size;
    cin >> size;
    //Dynamic array
    int *arr = new int[size];
    //Input values
    for(int i=0; i<size; i++)
    {
        cout<<"Enter value: "<<i<<endl;
        cin >> arr[i];
    }
    //Printing even values
    for(int i=0;i<size; i++)
    {
        if(arr[i] % 2 == 0)
        {
            cout<<arr[i];
            cout<<" ";

        }
    }
    //Printing odd values
    for(int i=0;i<size; i++)
    {
        if(arr[i] % 2 != 0)
        {
            cout<<arr[i];
            cout<<" ";

        }
    }
}