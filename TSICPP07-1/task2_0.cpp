/*
Assignment 11
Task 2.0

Write a C++ program to perform basic math operations (addition, subtraction,
multiplication, and division) using function overloading for different data types within a class


*/

#include<iostream>
#include<string>

using namespace std;
class operations
{
    private:
    int a, b;
    
    public:
    operations()
    {

    }
    operations(int n1, int n2)
    {
        a=n1;
        b=n2;
    }
    /********Addition************ */
    int addition(int a, int b)
    {
        cout<<"Int addition "<<endl;
        return a+b;
    }
    float addition(float a, float b)
    {
        cout<<"float addition "<<endl;
        return a+b;
    }
    double addition(double a, double b)
    {
        cout<<"Double addition "<<endl;
        return a+b;
    }
    /********Subtraction************ */
    int Subtraction(int a, int b)
    {
        cout<<"Int Subtraction "<<endl;
        return a-b;
    }
    float Subtraction(float a, float b)
    {
        cout<<"float addition "<<endl;
        return a-b;
    }
    double Subtraction(double a, double b)
    {
        cout<<"Double Subtraction "<<endl;
        return a-b;
    }
    /********Multiplication************ */
     int multiplication(int a, int b)
    {
        cout<<"Int multiplication "<<endl;
        return a*b;
    }
    float multiplication(float a, float b)
    {
        cout<<"float multiplication  "<<endl;
        return a*b;
    }
    double multiplication(double a, double b)
    {
        cout<<"Double multiplication "<<endl;
        return a*b;
    }
    /********Division************ */
     int Division(int a, int b)
    {
        cout<<"Int Division"<<endl;
        return a/b;
    }
    float Division(float a, float b)
    {
        cout<<"float Division"<<endl;
        return a/b;
    }
    double Division(double a, double b)
    {
        cout<<"Double Division"<<endl;
        return a/b;
    }
   
};
int main()
{
  
  operations obj;
  cout<<"****************Addition**************"<<endl;
  cout<<"Sum is: "<<obj.addition(5, 9)<<endl;
  cout<<"Sum is: "<<obj.addition(5.3, 9.9)<<endl;
  cout<<"Sum is: "<<obj.addition(555445115, 5481212154)<<endl;

  cout<<"****************SUbtraction**************"<<endl;
  cout<<"SUbtraction is: "<<obj.Subtraction(5, 9)<<endl;
  cout<<"SUbtraction is: "<<obj.Subtraction(5.3, 9.6)<<endl;
  cout<<"SUbtraction is: "<<obj.Subtraction(5521441122, 915258482)<<endl;

  cout<<"****************Multiplication**************"<<endl;
  cout<<"Multiplication is: "<<obj.multiplication(5, 9)<<endl;
  cout<<"Multiplication is: "<<obj.multiplication(5.6, 9.69)<<endl;
  cout<<"Multiplication is: "<<obj.multiplication(523551152, 91554841515)<<endl;

  cout<<"****************Division **************"<<endl<<endl;
  cout<<"Division is: "<<obj.Division(5, 10)<<endl;
  cout<<"Division is: "<<obj.Division(5.6, 10.2)<<endl;
  cout<<"Division is: "<<obj.Division(55285122, 101544521)<<endl;

  return 0;



   
}