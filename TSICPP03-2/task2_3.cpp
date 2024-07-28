/*
*******************
Assignment 05
Task 2.3
Recursive function to calculate the power of a number.



*/

#include <iostream>
using namespace std;
int power(int base, int exp)
{
    int p=1;
   if(exp==0)
   {
    return 1;
    
    
   }
   else{

    return base*power(base, exp-1);
    
   }

}
int main()
{
    int n,m;
    cout<<"Enter a base and :  "<<endl;
    cin>>n;
    cout<<"Enter exponenet to find the power: "<<endl;
    cin>>m;

    cout<<"Power is "<<power(n, m)<<endl;


}