/*
*******************
Assignment 04
Task 1.1
program in C to calculate the area of a circle using a macro like function.
*/
#include<iostream>
using namespace std;
#define Pi 3.1416
#define Area(radius) (Pi*radius*radius)
int main()
{
    cout<<"Input the radius to find the Area of the circle: "<<endl;
    int radius;
    cin>>radius;
    
    area=Area(radius);
    cout<<"Area is "<<area<<endl;
    return 0;
    
}