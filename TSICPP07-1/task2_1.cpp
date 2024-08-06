/*
Assignment 11
Task 2.1
Create a class Complex that represents complex numbers and overloads the
following operators:
● + to add two complex numbers.
● - to subtract two complex numbers.
● << to print a complex number.


*/

#include<iostream>
#include<string>

using namespace std;
class Complex
{
    private:
    
    
    
    public:
    int real, imag;
    friend ostream& operator << (ostream& onput, Complex& obj);
    Complex()
    {
        real = 0;
        imag = 0;

    }
    Complex(int r, int i)
    {
        real=r;
        imag=i;
    }
    Complex operator+ (Complex c)
    {
        Complex temp;
        temp.real= real + c.real;
        temp.imag= imag + c.imag;
        return temp;
    }
    Complex operator- (Complex c)
    {
        Complex temp;
        temp.real= real - c.real;
        temp.imag= imag - c.imag;
        return temp;
    }
   
    
    void print()
    {
        cout << real << " + " << imag << "i" << endl;
    }
   
    
    
   
};
ostream& operator << (ostream& output, Complex& obj)
{
    output<< obj.real<<" , ";
    output<< obj.imag;
    return output;
}

int main()
{
    Complex c1(10 , 10);
    Complex c2(4 , 6);
    Complex c3 = c1 - c2;
    c3.print();
    cout<<c3;
    
    

    return 0;



   
}