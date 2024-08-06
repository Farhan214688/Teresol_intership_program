/*
Assignment 11
Task 1.0

Create a base class Person with the following properties and methods:
● name (string)
● age (int)
● A constructor that initializes name and age
Create a derived class Student that inherits from Person and adds the following properties
and methods:
● studentID (int)
● A constructor that initializes name, age, and studentID
● A method displayInfo() that prints all the properties

*/

#include<iostream>
#include<string>

using namespace std;
class Person
{
    private:
    

    
    public:
    string name;
    int age;
    Person()
    {

    }
    Person(string n, int a)
    {
        name=n;
        age=a;
    }
    
    
   
};
class Student: public Person
{
    private:
    int studentID;

    public:
    Student(string n, int a, int id):Person(n, a)
    {
        studentID=id;
    }
    
    void displayInfo()
    {
        cout<<"Name of the student is: "<<name<<endl;
        cout<<"Age of the student is: "<<age<<endl;
        cout<<"ID of the student is: "<<studentID<<endl;
    }
};
int main()
{
    Student S1("Farhan" , 20 , 01);
    S1.displayInfo();
    

    return 0;



   
}