/*
Assignment 07
Task 1.x.3
C program that Reverse an array using pointers

*/
#include<stdio.h>
#include<string.h>
void Reverse(int *arr, int size)
{
    for(int i=size-1; i>=0; i--)
    {
        printf("%d\n", arr[i]);
    }
   
}
int main()
{
    int arr[5]={1, 2, 3, 4, 5};

    for(int i=0; i<5; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("After Reversion \n");
    Reverse(&arr, 5);
    

    
}
