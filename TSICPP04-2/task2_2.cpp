/*
Assignment 07
Task 2.3
Write a program that dynamically allocates memory for a 2D array of integers,
initializes it with values, prints the array, and then deallocates the memory



*/
#include<iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter number of rows: "<<endl;
    cin>>m;
    cout<<"Enter number of columns: "<<endl;
    cin>>n;
    int* arr= new int [m*n];
    for(int i =0; i<m; i++)
    {
        for(int j =0; j<n; j++)
        {
            cout<<"Enter value: ["<<i<<"]["<<j<<"]"<<endl; 
            cin >> *(arr + i * n + j);

        }
        
        
    }
    cout<<"output "<<endl;

    for(int i =0; i<m; i++)
    {
        for(int j =0; j<n; j++)
        {
            cout<<"Values are: ["<<i<<"]["<<j<<"]"<<endl; 
            cout << *(arr + i * n + j) << endl; 

        }
        
        
    }

    delete[] arr;

    return 0;

}

