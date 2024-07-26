#include<iostream>
#include<string>
using namespace std;
int main()
{
    char choice;
    cout<<"Select a character from a to c "<<endl;
    cin>>choice;
    switch (choice)
    {

        case 'a':
        cout<<"You selected character a "<<endl;
        break;
        case 'b':
        cout<<"You selected character b"<<endl;
        break;
        case 'c':
        cout<<"You selected character c "<<endl;
        break;
        default:
        cout<<"Invalid Option: "<<endl;
        break;
        
        return 0;

    }
}