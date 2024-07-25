#include<iostream>
#include<string>
using namespace std;
int main()
{
    int age;
    cout<<"Enter the age "<<endl;
    cin>>age;
    // Clear the newline character left in the buffer
    cin.ignore();
    string citizen;
    cout<<"Enter the citizenship status"<<endl;
    getline(cin, citizen);
    if(age>18 && (citizen=="yes" || "Yes"))
    {
        cout<<"You are eligible to vote "<<endl;
    }
    else
    {
        cout<<"You are not eligible to vote "<<endl;
    }
    return 0;
}