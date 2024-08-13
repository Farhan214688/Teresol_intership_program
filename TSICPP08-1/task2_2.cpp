#include <iostream>
#include <stack>
#include <string>
using namespace std;

#define MAXSIZE 15
class stack1
{
private:
    int top;
    int stack[MAXSIZE];

public:
    stack1()
    {
        top = -1;
    }
    void Push(int element)
    {
        if (top >= MAXSIZE)
        {
            printf("Stack overflow \n");
        }
        else
        {
            stack[++top] = element;
        }
    }
    int pop()
    {
        int item;
        if (top < 0)
        {
            printf("Stack underflow\n");
            return -1; // Return a default value on underflow
        }
        else
        {
            item = stack[top]; // Assign the top element to item
            top = top - 1;
            return item; // Return the popped element
        }
    }
    bool isEmpty()
    {

        return (top < 0);
    }
    int peek()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return 0;
        }
        return stack[top];
    }
    bool isFull()
    {

        return (top >= MAXSIZE - 1);
    }
    void sort()
    {
        stack1 tmp;
        while (!isEmpty())
        {
            int x = pop();
            while (!tmp.isEmpty() && tmp.peek() > x)
            {
                Push(tmp.pop());
            }
            tmp.Push(x);
        }
        while (!tmp.isEmpty())
        {
            Push(tmp.pop());
        }
    }
    void display()
    {
        if (top < 0)
        {
            cout << "Stack is empty" << endl; // Display message if stack is empty
            return;
        }
        cout << "\nStack elements: ";
        for (int i = top; i >= 0; i--)
            cout << stack[i] << " "; // Display elements of the stack
        cout << endl;
    }
};
int main()
{
    stack1 stk; // Initialize the stack stk
    cout << "Input some elements onto the stack:\n";
    stk.Push(7);
    stk.Push(4);
    stk.Push(2);
    stk.Push(5);
    stk.Push(1);
    stk.Push(0);

    stk.display(); // Display the elements of the stack
    cout << "\nSort the elements in the stack:\n";
    stk.sort();
    cout << "Display the sorted elements of the stack:";
    stk.display();
    return 0;
}