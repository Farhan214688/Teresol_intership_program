/*
Assignment 12
Task 1.1

Create a singly linked list using C++ and make separate functions for each of the
following operations.
1. add element at head
2. add element at tail
3. Print the nth element of the list
4. add element at a specific position in linked list
5. Search for an element in the list
6. delete element at a specific position
7. Print the linked list
8. Find length of linked list


*/

#include <iostream>
#include <string>
using namespace std;
struct node
{
    int data;
    node *next;
};
class list
{
private:
    node *head;
    node *tail;

public:
    list()
    {
        head = NULL;
        tail = NULL;
    }

    void creatNode(int value)
    {
        node *temp = new node;
        temp->data = value;
        temp->next = NULL;

        if (head == NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }
    void insertion_at_start(int value)
    {
        node *temp = new node;
        temp->data = value;
        temp->next = head;
        head = temp;
    }

    void insertion_at_end(int value)
    {
        node *temp = new node;
        temp->data = value;
        temp->next = NULL;

        if (head == NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }
    void print_at_N(int index)
    {
        node *temp = new node;
        temp = head;
        int count = 0;
        while (temp != NULL)
        {
            if (count == index)
            {
                cout << temp->data;
            }
            count++;
            temp = temp->next;
        }
    }
    void insert_position(int pos, int value)
    {
        node *pre = new node;
        node *cur = new node;
        node *temp = new node;
        cur = head;
        for (int i = 1; i < pos; i++)
        {
            pre = cur;
            cur = cur->next;
        }
        temp->data = value;
        pre->next = temp;
        temp->next = cur;
    }
    void Search(int value)
    {
        node *temp = new node;
        temp = head;
        int count = 0;
        bool found = false;
        while (temp != NULL)
        {
            if (temp->data == value)
            {
                found = true;

                cout << "Element found at index: " << count << endl;
                
            }
            count++;
            temp = temp->next;
        }
        if (!found) // If the element was not found
        {
            cout << "Element not found: " << value << endl;
        }
    }
    void delete_position(int pos)
    {
        node *current = new node;
        node *previous = new node;
        current = head;
        for (int i = 1; i < pos; i++)
        {
            previous = current;
            current = current->next;
        }
        previous->next = current->next;
    }
    int length()
    {
        node *temp = new node;
        temp = head;
        int count = 0;
        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }

    void display()
    {
        node *temp = new node;
        temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "\t";
            temp = temp->next;
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
    cout << "Dislay" << endl;
    obj.display();
    cout << endl;
    cout << "Insertion at position " << endl;
    obj.insert_position(3, 14);
    obj.display();

    cout << endl;
    cout << "Deletion " << endl;
    obj.delete_position(4);
    obj.display();
    cout << endl;

    cout << "Insertion at Start" << endl;
    obj.insertion_at_start(15);
    obj.display();
    cout << endl;

    cout << "Iength" << endl;
    cout << obj.length();
    cout << endl;

    cout << "Print at N" << endl;
    obj.print_at_N(1);
    cout << endl;

    cout << "Search" << endl;
    obj.Search(1);
    cout << endl;

    node *head = NULL;
    cout << "Insertion at End" << endl;
    obj.insertion_at_end(25);
    obj.display();
    cout << endl;
}