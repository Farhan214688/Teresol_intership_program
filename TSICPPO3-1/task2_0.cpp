
/*
*******************
Assignment 04
Task 2.2
function to calculate the area of a rectangle


*/#include<iostream>
using namespace std;
int rectangle(int length, int width)
{
    int area=length * width;
    return area;

}
int main()
{
    cout<<"Enter the lenght: "<<endl;
    int length;
    cin>>length;
    cout<<"Enter the Width: "<<endl;
    int width;
    cin>>width;
    
    cout<<"The area of the rectangle is: "<<rectangle(length, width);
    return 0;

}