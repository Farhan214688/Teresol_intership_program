#include<iostream>
using namespace std;
int main()
{
    cout<<"Give the size of the array "<<endl;
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Enter value "<<i<<endl;
        cin>>arr[i];
        cout<<endl;
    }
    int sum =0;
    for(int i=0; i<n; i++)
    {
        sum=sum+arr[i];
    }
    cout<<"Average of the elements in the array is "<<sum/n<<endl;



}