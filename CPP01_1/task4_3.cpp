#include<iostream>
using namespace std;
int mostFrequent(int *arr, int n)
{
    int max_count=0;
    int freq;
    for (int i = 0; i < n; i++) 
    { 
        int count = 0; 
        for (int j = 0; j < n; j++)  
        { 
            if (arr[i] == arr[j]) 
                count++; 
        } 
        if (count > max_count) { 
            max_count = count; 
            freq = arr[i]; 
        } 
    } 
  
    return freq; 
  

}
int main()
{
    int arr[] = { 40, 50, 30, 40, 50, 30, 30 }; 
    int n = 7; 
    cout<<"Most Frequent element in the array is "<<mostFrequent(arr, n);
    return 0;

}