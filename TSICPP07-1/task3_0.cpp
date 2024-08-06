/*
Assignment 11
Task 3.0

Create a base class Employee with the following properties and methods:
Create two derived classes Manager and Developer that inherit from Employee and
override the calculateBonus() method:

*/

#include<iostream>
#include<string>

using namespace std;
class Employee
{
    private:
    

    public:
    string name;
    double salary;
    Employee()
    {
        name = " ";
        salary = 0;
    }
    Employee(string n, double s)
    {
        name = n;
        salary = s;
    }
    virtual double calculateBonus()
    {
        return (salary / 100) * 20;
    }
   
};
class Manager: public Employee
{
    private:
    

    public:
    Manager(string n, double s):Employee(n ,s)
    {

    }
    double calculateBonus()
    {
        return (salary / 100) * 20;
    }

    
};
class Developer: public Employee
{
    private:
    

    public:
    Developer(string n, double s):Employee(n ,s)
    {

    }
    double calculateBonus()
    {
        return (salary / 100) * 10;
    }
    

    
};
int main()
{
    Employee* bptr;
    Employee* bptr2;
    Developer d("FAf", 15000);
    Manager m("Ali", 33000);
    bptr = &d;
    bptr2=&m;
    cout<<"Bouus of developer: "<<endl;
    cout<<bptr->calculateBonus()<<endl;
    cout<<"Bouus of Manager: "<<endl;
    cout<<bptr2->calculateBonus()<<endl;
    

    return 0;



   
}