#include<iostream>
using namespace std;
int main()
{
    float radius;
    cout<<"Enter the radius of the circle to calculata its area and circumference ";
    cin>>radius;
    cout<<"Area of the circle is "<< 3.1416 * radius * radius<<endl;
    cout<<"Area of the circumference is "<< 2 * 3.1416 * radius;
    return 0;
}