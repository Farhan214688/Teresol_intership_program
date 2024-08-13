/*
Assignment 12
Task 1.0

Write a C++ program to create and display a Singly Linked List. The list contains
the data entered:


*/

#include<iostream>
#include<string>
using namespace std;
struct node
{
  int data;
  node* next;  
};
class list
{
    private:
    node* head;
    node* tail;

    public:

list()
{
    head= NULL;
    tail= NULL;
}

void creatNode(int value)
{
    node* temp = new node;
    temp->data = value;
    temp->next= NULL;

    if(head==NULL)
    {
        head=temp;
        tail=temp;
    }
    else
    {
        tail->next=temp;
        tail=temp;
    }
}
void display()
{
    node* temp = new node;
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"\t";
        temp= temp->next;
    }
}



};

using namespace std;
int main()
{
    list obj;
    obj.creatNode(11);
    obj.creatNode(9);
    obj.creatNode(7);
    obj.creatNode(5);
    obj.creatNode(3);
    obj.creatNode(1);

    cout<<"Display "<<endl;
    obj.display();

}