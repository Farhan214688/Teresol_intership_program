#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the numbers "<<endl;
    cin>>a;
    cin>>b;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    // Swap using XOR
    a = a ^ b;
    b = a ^ b; // Now b is equal to a
    a = a ^ b; // Now a is equal to b
    cout << "After swapping: a = " << a << ", b = " << b << endl;
    return 0;
}
