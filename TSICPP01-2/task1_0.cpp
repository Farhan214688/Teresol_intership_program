#include<iostream>
#include<string>
using namespace std;
int main()
{
    int age;
    cout<<"Enter the age "<<endl;
    cin>>age;
    string citizen;
    cout<<"Enter the citizenshi status"<<endl;
    getline(cin, citizen);
    if(age>18 && citizen=="yes" || "Yes")
    {
        cout<<"You are eligible to vote "<<endl;
    }
    else
    {
        cout<<"You are not eligible to vote "<<endl;
    }
}