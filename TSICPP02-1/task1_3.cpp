#include<iostream>
#include<string>
using namespace std;
struct Address
{
    string street;
    string city;
    int zip;

    
};
struct Person
{
        Address address;
        string name;
        int age;

};
int main()
{
    Person person;
    person.name = "Farhan";
    person.age = 21;
    person.address.street = "DHA Streeet 21";
    person.address.city = "Islamabad";
    person.address.zip = 5891;

    //Printing Values
    cout << "Name: " << person.name << endl;
    cout << "Age: " << person.age << endl;
    cout << "Address: " << endl;
    cout << "Street: " << person.address.street << endl;
    cout << "City: " << person.address.city << endl;
    cout << "ZIP: " << person.address.zip << endl;

    return 0;

}