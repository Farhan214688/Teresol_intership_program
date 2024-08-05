  /*
Assignment 10
Task 1.1

Write a program and input two integers in main and pass them to the default
constructor of the class. Show the result of the addition of two numbers.

*/
#include<iostream>

using namespace std;
class Addition
{
    private:
    int n1, n2;
    public:
    Addition(int a1, int b2)
    {
        n1=a1;
        n2=b2;
    }
    int add()
    {
        return n1+n2;
    }
    
   
};
int main()
{
    int a,b;
    cout<<"Enter integer 1: "<<endl;
    cin>>a;
    cout<<"Enter integer 2: "<<endl;
    cin>>b;
    Addition obj(a, b);
    cout<<"Addition is: "<<obj.add()<<endl;

    return 0;



   
}