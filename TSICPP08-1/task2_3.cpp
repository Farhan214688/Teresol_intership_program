#include <stdio.h>
#define SIZE 80

int array[SIZE];
int top1 = -1;
int top2 = SIZE;
// void* stack [256];

//class stacks

// constructor 
    // 256 - 246

void push1(int data)
{

    if (top1 < top2 - 1)
    {
        top1++;
        array[top1] = data;
    }
    else
    {
        printf("Stack is full");
    }

}
void push2(int data)
{
    if (top1 < top2 - 1)
    {
        top2--;
        array[top2] = data;
    }
    else
    {
        printf("Stack is full..\n");
    }
}

void pop1()
{

    if (top1 >= 0)
    {
        int popped_element = array[top1];
        top1--;

        printf("%d is being popped from Stack 1\n", popped_element);
    }
    else
    {
        printf("Stack is Empty \n");
    }
}
void pop2()
{

    if (top2 < SIZE)
    {
        int popped_element = array[top2];
        top2--;

        printf("%d is being popped from Stack 1\n", popped_element);
    }
    else
    {
        printf("Stack is Empty!\n");
    }
}

void display_stack1()
{
    int i;
    for (i = top1; i >= 0; --i)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}
void display_stack2()
{
    int i;
    for (i = top2; i < SIZE; ++i)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main()
{
    int ar[SIZE];
    int i;
    int num_of_ele;

    printf("We can push a total of 20 values\n");

    // Number of elements pushed in stack 1 is 10
    // Number of elements pushed in stack 2 is 10

    for (i = 1; i <= 10; ++i)
    {
        push1(i);
        printf("Value Pushed in Stack 1 is %d\n", i);
    }

    for (i = 11; i <= 20; ++i)
    {
        push2(i);
        printf("Value Pushed in Stack 2 is %d\n", i);
    }


    display_stack1();
    display_stack2();

    return 0;
}