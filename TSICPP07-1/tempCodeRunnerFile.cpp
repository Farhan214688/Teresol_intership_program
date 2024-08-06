/*
Assignment 11
Task 2.1


*/

#include<iostream>
#include<string>

using namespace std;
class Complex
{
    private:
    int real, imag;
    
    
    public:
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
        temp.real= real+temp.real;
        temp.imag= imag+ temp.imag;
        return temp;
    }
    
    void print()
    {
        cout<<imag<< " , "<<imag <<endl;
    }
   
    
    
   
};

int main()
{
    Complex c1(5 , 9);
    Complex c2(4 , 10);
    Complex c3;
    c3=c1 + c2;
    c3.print();
    
    

    return 0;



   
}