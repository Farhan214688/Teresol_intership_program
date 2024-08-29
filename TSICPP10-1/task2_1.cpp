/*

Task 2.1: Study the code given below. Modify the program to handle any possible
exceptions that might occur. You may use try, throw and catch to handle the exception
appropriately.



*/

#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter two Numbers:\n";
    cin>>a;
    cin>>b;
    try
    {
        if (b == 0)
        {
            throw b;
        }
        else
        {
            c = a / b;
            cout << "Result of " << a << " / " << b << " = " << c << endl;
        }
    }
    catch (int x)
    {
        cout << "Division is not possible by 0 " << endl;
    }
    


    return 0;
}
