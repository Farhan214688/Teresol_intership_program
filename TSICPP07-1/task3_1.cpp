/*
Assignment 11
Task 3.0


*/

#include<iostream>
#include<string>

using namespace std;
class Shape
{
    private:
    

    public:
    string name;
    double salary;
    Shape()
    {
        name = " ";
        salary = 0;
    }
    Shape(string n, double s)
    {
        name = n;
        salary = s;
    }
    virtual void draw()
    {
        cout<<"Shape draw function: "<<endl;
    }
   
};
class Circle: public Shape
{
    private:
    

    public:
    Circle()
    {

    }
    Circle(string n, double s):Shape(n ,s)
    {

    }
    void draw()
    {
        cout<<"Circle draw function: "<<endl;
    }

    
};
class Rectangle: public Shape
{
    private:
    

    public:
    Rectangle()
    {

    }
    Rectangle(string n, double s):Shape(n ,s)
    {

    }
    void draw()
    {
        cout<<"Rectangle draw function: "<<endl;
    }
    

    
};
int main()
{
    Shape* ptr1;
    Shape* ptr2;
    Circle c;
    ptr1 = &c;
    Rectangle r;
    ptr2 = &r;

    cout<<"Circle "<<endl;
    ptr1->draw();
    cout<<endl;
    cout<<"Rectangle "<<endl;
    ptr2->draw();


    

    return 0;



   
}