/*
*******************
Assignment 06
Task 1.x.7
Sum of Array Elements using Pointers

*/
#include <iostream>
using namespace std;
int summArray(int *arr) 
{
    int sum=0;
    for(int i=0; i<7; i++)
    {
        sum=sum+arr[i];
            
    }
    return sum;

}

int main()
{
    int arr[7];
    for(int i=0; i<7; i++)
    {
        cout<<"Enter value: "<<i<<endl;
        cin>>arr[i];
            
    }
    cout<<"sum of the array is: "<<summArray(arr)<<endl;

    return 0;
}
