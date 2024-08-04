/*
Assignment 9
Task 1.0
Implement the myAtoi(string s) function, which converts a string to a 32-bit signed
integer.


*/
#include <iostream>
#include <string>
#include <limits.h> 
using namespace std;

int myAtoi(string s) 
{
    int i = 0; 
    int n = s.length();
    long long result = 0; 
    int sign = 1; 

    while (i < n && s[i] == ' ') 
    {
        i++;
    }

    if (i < n && (s[i] == '-' || s[i] == '+')) 
    {
        sign = (s[i] == '-') ? -1 : 1;
        i++;
    }

    while (i < n && s[i] == '0') 
    {
        i++;
    }
    while (i < n && s[i] >= '0' && s[i] <= '9') 
    {
        result = result * 10 + (s[i] - '0');

        
        if (result * sign > INT_MAX) 
        {
            return INT_MAX; 
        }
        if (result * sign < INT_MIN) 
        {
            return INT_MIN; 
        }

        i++;
    }

    return static_cast<int>(result * sign); 
}

int main() 
{
    string s1;
    cout << "Enter string: " << endl;
    getline(cin, s1);
    int convertedValue = myAtoi(s1);
    cout << "After conversion, the integer is: " << convertedValue << endl;
    return 0;
}