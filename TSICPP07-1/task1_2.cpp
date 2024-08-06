/*
Assignment 11
Task 1.2

Create a base class Shape with the following properties and methods:
● color (string)
● A constructor that initializes color
● A method displayColor() that prints the color


*/

#include<iostream>
#include<string>

using namespace std;
class Shape
{
    private:
    
    
    public:
    string color;
    Shape(string c)
    {
        color = c;
    }
    void displayColor()
    {
        cout<<"color of the shape is: "<<color<<endl;
    }
    
   
};
class Circle: public Shape
{
    private:
    double radius;

    public:
    Circle(string c, double r):Shape(c)
    {
        radius= r;
    }
    int area()
    {
        return 3.1416 * radius * radius;
    }

    void display()
    {
        cout<<"Color of the shape is: "<<color<<endl;
        cout<<"Area of the Circle is: "<<area()<<endl;

    }
  
};
int main()
{
  
    Circle c("White" , 5);
    c.display();

    return 0;



   
}