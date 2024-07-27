
/*
*******************
Assignment 04
Task 2.2

a function that attempts to modify an integer value by passing it by value.


*/#include<iostream>
using namespace std;
void change(int x)
{
  x++;
  cout<<"In function the value is: "<<x<<endl;

}
int main()
{
   int a=5;
   cout<<"The value of a: "<<a<<endl;
   
   change(a);
   cout<<"the value of a after function call by value: "<<endl;
   cout<<a;
   return 0;

}