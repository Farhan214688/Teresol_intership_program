/*
Assignment 07
Task 1.x.2
C program that concatenate two strings using pointer

*/
#include<stdio.h>
#include<string.h>
void concatenate(char* str1, char* str2)
{
    strcat(str1,str2);
    printf("%s", str1);
}
int main()
{
    char s1[]=" Hello ";
    char s2[]=" World ";
    concatenate(&s1,&s2);
    

    
}
