#include<iostream>
#include<string>
using namespace std;
struct Student
{
    string name;
    int age;
    string grade;
};

int main()
{
    struct Student obj;
    obj.name="Farhan";
    obj.age=22;
    obj.grade="A+";
    
    cout<<"Name of the student is: "<<obj.name<<endl;
    cout<<"Age of the student is: "<<obj.age<<endl;
    cout<<"Grade of the student is: "<<obj.grade<<endl;

    return 0;
}