/*
*******************
Assignment 04
Task 1.0
Program in C to calculate the circumference of a circle

*/
#include<iostream>
using namespace std;
#define Pi 3.1416
int main()
{
    cout<<"Input the radius to find the circumference of the circle: "<<endl;
    int radius;
    cin>>radius;
    cout<<"circumference of the circle: "<< 2 * Pi * radius<<endl;
    return 0;

}