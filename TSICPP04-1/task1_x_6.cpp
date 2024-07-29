/*
*******************
Assignment 06
Task 1.x.6
copy one string to another string using pointer


*/
#include <iostream>
using namespace std;
string copy(const string* str) 
{
    return *str;

}

int main()
{
    cout<<"Enter string: "<<endl;
    string string1;
    getline(cin, string1);
    cout<<"First string: "<<string1<<endl;
    cout<<"Second string: "<<copy(&string1)<<endl;

    return 0;
}
