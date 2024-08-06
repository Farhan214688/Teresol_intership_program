/*
Assignment 11
Task 1.1

Create a base class Vehicle with the following properties and methods:
● brand (string)
● model (string)
● color (string)
● A constructor that initializes brand, model and color
● A method displayInfo() that prints all the member variables

*/

#include<iostream>
#include<string>

using namespace std;
class Vehicle
{
    private:
    
    
    public:
    string brand, model, color;
    Vehicle(string br, string mo, string co)
    {
        brand=br;
        model=mo;
        color=co;
    }
    Vehicle()
    {
    }
    void  displayInfo()
    {
        cout<<"Brand of the Vehicle is: "<<brand<<endl;
        cout<<"Model of the Vehicle is: "<<model<<endl;
        cout<<"Color of the Vehicle is: "<<color<<endl;
    }
    
   
};
class Car: public Vehicle
{
    private:
    

    public:
    
    int numberOfDoors;
    Car()
    {
        
    }
    Car(string b, string m, string c , int door ): Vehicle(b, m, c)
    {
        numberOfDoors=door;
        

    }
    void displayCarInfo() 
    {
        cout<<"Brand of the Vehicle is: "<<brand<<endl;
        cout<<"Model of the Vehicle is: "<<model<<endl;
        cout<<"Number of the doors of the Vehicle is: "<<numberOfDoors<<endl;
    }
};
class ElectricCar: public Car
{
    private:
    int batteryLife;

    public:
    ElectricCar(string b, string m, string c, int door, int bat ) : Car(b, m,c, door)
    {
        batteryLife=bat;
    }
    void displayElectricCarInfo() 
    {
        cout<<"Brand of the Vehicle is: "<<brand<<endl;
        cout<<"Model of the Vehicle is: "<<model<<endl;
        cout<<"Color of the Vehicle is: "<<color<<endl;
        cout<<"Number of the doors of the Vehicle is: "<<numberOfDoors<<endl;
        cout<<"Battery life of the Vehicle is: "<<batteryLife<<endl;
    }
};
int main()
{
    ElectricCar obj("Tesla", "Model S", "Red", 4, 300);
    obj.displayElectricCarInfo();
    return 0;



   
}