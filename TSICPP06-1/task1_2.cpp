  /*
Assignment 10
Task 1.2

Write a c++ class called 'student' with
Data members:
name(char type),
marks1,marks2 (integer type)
The program asks the user to enter name and marks. Then calc_avg() calculates the
average marks and disp() display name and total media mark on screen in different lines

*/

#include<iostream>
#include<string>

using namespace std;
class Student
{
    private:

    char Name[20];
    int marks1, marks2;
    public:

    void getInfo()
    {
        cout<<"Enter name of the student: "<<endl;
        cin.getline(Name , 20);
        cout<<"Enter marks 1 of the student: "<<endl;
        cin>>marks1;
        cout<<"Enter marks 2 of the student: "<<endl;
        cin>>marks2;
        cin.ignore();
    }
    int calAvg()
    {
        return (marks1+marks2) / 2.0;
    }
    void display()
    {
        cout<<"**********************"<<endl;
        cout<<"Student's Information: "<<endl;
        cout<<"Name of the student is: "<<Name<<endl;
        cout<<"Average marks is: "<<calAvg()<<endl;
    }
    
   
};
int main()
{
    
    
    Student obj;
    obj.getInfo();
    obj.display();


    return 0;



   
}