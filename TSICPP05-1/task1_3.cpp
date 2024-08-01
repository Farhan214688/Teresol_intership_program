/*
Assignment 08
Task 1.3
Write a program that concatenates two strings using dynamic memory allocation.
Example:
Input: "Hello, " and "World!"
Output: "Hello, World!"

*/
#include<iostream>
#include<string>
using namespace std;

int main()
{

   string *s1= new string;
   cout<<"Enter string 1: "<<endl;
   getline(cin, *s1);

   string *s2= new string;
   cout<<"Enter string 2: "<<endl;
   getline(cin, *s2);

   string *s3= new string;
   *s3 = *s1 + " " + *s2; 
   cout<<"String after concatination: "<< *s3 <<endl;
   

}

