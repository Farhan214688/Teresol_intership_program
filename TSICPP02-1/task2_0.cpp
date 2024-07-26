#include<iostream>
#include<string>
using namespace std;
int main()
{
    int choice;
    cout<<"Select an option "<<endl;
    cin>>choice;
    switch (choice)
    {

        case 1:
        cout<<"You selected option 1 "<<endl;
        break;
        case 2:
        cout<<"You selected option 2 "<<endl;
        break;
        case 3:
        cout<<"You selected option 3 "<<endl;
        break;
        default:
        cout<<"Invalid Option: "<<endl;
        break;
        
        return 0;

    }
}