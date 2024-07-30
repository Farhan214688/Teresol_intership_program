/*
Assignment 07
Task 2.1.2
Create an array of strings using Dynamic Memory allocation using malloc/calloc
function. Then create separate functions for each of the operations mentioned below.
get size of an element



*/
#include<iostream>
#include <cstdlib>
using namespace std;
void print(int* ptr, int size) 
{
    cout << "Size of each element in the array is: " << sizeof(int) << " bytes" << endl;
}
int main()
{
    int size;
    cout<<"Enter size of the array: "<<endl;
    cin>>size;
    int *ptr=(int* )malloc(size * sizeof(int));
    for(int i =0; i<size; i++)
    {
        cout<<"Enter value: "<<i<<endl;
        cin>>ptr[i];
        
    }
    
    print(ptr, size);

    free(ptr);

    return 0;

}

