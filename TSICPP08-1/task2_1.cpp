/*
Assignment 12
Task 1.0

Write a C/C++ program that accepts a string and reverse it using a stack.

*/
#include <iostream>
#include <stack>
#include <string>
using namespace std;



#define MAXSIZE 200
unsigned top = 0;
int stack1[MAXSIZE];

/*class stack2
{
    private:
    
    public:

    bool pop();

    bool push(char x);
    bool push(int x);

    


}*/



// bool
char Push(char element)
{
    if(top>=MAXSIZE-1)
    {
        printf("Stack overflow \n");
        return '\0';
    }
    else
    {
        stack1[++top]= element;
        return element;
    }
}

char Push(int element)
{
    if(top>=MAXSIZE-1)
    {
        printf("Stack overflow \n");
        return '\0';
    }
    else
    {
        stack1[++top]= element;
        return element;
    }
}

// bool
char pop()
{
    char item; 
    if(top < 0)
    {
        printf("Stack underflow\n");
        return '\0';
    }
    else
    {
        item = stack1[top];
        top = top-1;
        return item;
    }
}

// top void*

int main()
{
    
    
    string str = "hi-educative";
    cout << "Original String - " << str << endl;

    for (char ch: str) 
    {
        Push(ch);
    }

    str = "";
    while (top != -1) 
    {
        str += pop();
    }
    while(pop())
    {

    }

    cout << "Reversed String - " << str << endl;
    return 0;
}