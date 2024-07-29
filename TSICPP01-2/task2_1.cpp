/*****************************************
 *  task : 
 *  assigment no. 
 *  problem statement:
 * 
 * 
 * 
 */



#include<iostream>
using namespace std;
int main()
{
    int arr[]={1, 10, 123, 45, 8, 100};
    int size = 6;
    cout << "Elements with at least two significant digits are: ";
    for(int i= 0; i < size; i++)
    {
        int num=arr[i];
        int count=0;
        while(num !=0)
        {
            num/=10;
            count++;

        }
        if(count >= 2)
        {
            cout<<arr[i]<< " ";
            
        }
    }
    cout<<endl;
    return 0;

}