/*
Assignment 07
Task 1.x.1
C program that change the value of a constant integer using pointers

*/
#include<stdio.h>
void change(const int *n)
{
    int* modify= (int*) n;
    *modify=56;

}
int main()
{
    const int a=45;
    printf("New value of const is: %d\n", a);
    change(&a);
    printf("New value of const is: %d", a);
}
