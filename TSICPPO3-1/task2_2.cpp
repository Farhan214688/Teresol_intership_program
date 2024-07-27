/*
*******************
Assignment 04
Task 2.2
A function that modifies an integer value by passing it by reference



*/
#include<iostream>
using namespace std;
void change(int &x)
{
  x=25;
  cout<<"The value of a after increment: "<<endl;
  cout<<x<<endl;


}
int main()
{
   int a=5;
   cout<<"The value of a before function call: "<<a<<endl;
   cout<<a<<endl;
   change(a);
   cout<<"the value of a after before increment: "<<endl;
   cout<<a;
   return 0;

}