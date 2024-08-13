/*
Assignment 12
Task 2.0

Write a C program to implement a stack using an array that supports push, pop,
get middle, and delete middle elements.



*/
#include<stdio.h>
#include <iostream>


#define MAXSIZE 100

int stack[MAXSIZE];
int top = -1;
void Push(int element)
{
    if(top>=MAXSIZE)
    {
        printf("Stack overflow \n");

    }
    else{
        stack[++top]= element;
        std::cout<<"\n top = "<<top<<std::endl;
    }
}
void pop()
{
    int item; 
    if(top< 0)
    {
        printf("Stack underflow\n");

    }
    else
    {
        top = top-1;
        std::cout<<"\ntop = "<<top<<std::endl;

    }
    
}
void display()
{
    for (int i=top; i>=0; i--)  
    {  
        printf("%d\n",stack[i]);  
    } 
}
void  cust_peek()
{
    std::cout<<stack[top]<<std::endl;
}
void getmiddle()
{
    int size=0;
    size = top;
    int mid = size/2;
    std::cout<< "Middle value should be at : "<<mid<<std::endl;
   // printf("%d\n",stack[mid]);
    for (int i=top; i > mid; --i)  
    {  
        pop();
         
    }   
    std::cout<<"Middle Element is: ";
    cust_peek();

    

}
void delMiddle()
{
    int size=0;
    size = top;
    int mid = (size/2) + 1;

    std::cout<< "Middle value should be at : "<<mid<<std::endl;
   // printf("%d\n",stack[mid]);
    for (int i=top; i > mid; --i)  
    {  
        pop();
         
    }   
    std::cout<<"Middle Element is: ";
    cust_peek();
    //std::cout<<"Deleting now middle element: ";
    //pop();
    std::cout<<"After Deleting  middle element: ";
    display();
    




}

int main()
{

    Push(10);
    Push(20);
    Push(30);
    Push(40);
    Push(50);
    Push(60);
    Push(70);
    Push(80);
    

    printf("\nDispaly\n");
    display();
    
    printf("\nPOP");
    printf(" Function Called\n");
    pop();
    printf("\nAfter POP\n");
    display();


    //printf("\nGet Middle\n");
    //getmiddle();

    printf("\nDeleting Middle\n");
    delMiddle();





    

    

}