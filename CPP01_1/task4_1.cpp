#include<iostream>
using namespace std;
int main()
{
    int arr[7];
    cout<<"Enter array: "<<endl;
    for(int i=0; i<7; i++)
    {
        cin>>arr[i];
        cout<<endl;
    }
    int max=arr[0];
    for(int i=0; i<7; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<"Largest number in the array is "<<max<<endl;
    return 0;
    
}