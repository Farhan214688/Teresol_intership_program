  /*
Assignment 10
Task 1.0

Write a class having two private variables and one member function which will
return the area of the rectangle

*/
#include<iostream>

using namespace std;
class Area
{
    private:

    int length, width;

    public:
    
    Area(int len, int wid)
    {
        length=len;
        width=wid;
    }

    int calArea()
    {
        return length*width;
    }
};
int main()
{
    Area obj(5,4);
    cout<<"Area is: "<<obj.calArea()<<endl;

    return 0;
}