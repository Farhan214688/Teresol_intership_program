/*
Assignment 08
Task 1.4

Write a program that parses a CSV string and prints each value. Use strok() and
strok_r() functions
Example:
Input: "John,Doe,30,Engineer"
Output: "John" "Doe" "30" "Engineer"

*/
#include<iostream>
#include<string.h>
using namespace std;

int main()
{

   char str[] = "This is my string";

   char *portion= strtok(str, " ");
   while(portion !=NULL)
   {
    cout<<portion<<endl;
    portion = strtok(NULL, " ");
   }
   
   

}

