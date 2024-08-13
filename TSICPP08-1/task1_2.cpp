/*
Assignment 12
Task 1.2

Create a doubly linked list using C++ and make separate functions for each of the
following operations.
1. Display the list
2. Display the list in reverse order
3. Insert a node in the beginning
4. Insert a node in the end
5. Insert a node at any position
6. Insert a node in the middle of the list
7. Delete the node in the beginning
8. Delete the node in the end
9. Delete the node in the middle
10. Print the maximum element value in the list


*/
#include <iostream>
#include <string>
using namespace std;
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
class list
{
private:
    node *head;
    node *tail;

public:
    int size = 0;
    list()
    {
        head = NULL;
        tail = NULL;
    }
    void insert_front(int new_data)
    {
        node *newNode = new node;
        newNode->data = new_data;
        newNode->next = head;
        newNode->prev = NULL;

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            size++;
        }
        else
        {
            head->prev = newNode;
            head = newNode;
            size++;
        }
    }
    void insert_End(int new_data)
    {
        size++;
        node *newNode = new node;
        newNode->data = new_data;
        newNode->next = NULL;
        newNode->prev = tail;
        if (tail == NULL)
        {
            head = newNode;
            tail = newNode;
            //size++;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
            //size++;
        }
    }
    void insert_position(int pos, int value)
    {
        size++;
        if (pos == 0)
        { // Inserting at the head
            node *newNode = new node;
            newNode->data = value;
            newNode->next = head;
            newNode->prev = NULL;

            if (head != NULL)
            {
                head->prev = newNode;
            }
            else
            {
                tail = newNode; // If the list was empty, set tail to new node
            }
            head = newNode;
            return;
        }

        node *current = head;
        for (int i = 0; i < pos - 1 && current != NULL; i++)
        {
            current = current->next;
        }

        if (current == NULL)
        {
            cout << "Position out of bounds." << endl;
            return;
        }

        node *newNode = new node;
        newNode->data = value;

        newNode->next = current->next;
        newNode->prev = current;
        current->next = newNode;

        if (newNode->next != NULL)
        {
            newNode->next->prev = newNode;
        }
        else
        {
            tail = newNode; // If inserting at the end, update tail
        }
    }
    void insert_in_middle(int data)
    {
        size++;
    node* newNode = new node;
    node* temp = head;
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) { // If the list is empty
        newNode->prev = NULL; // New node is the only node
        head = newNode;
        tail = newNode;
    } else
    {
        // Calculate the middle index
        int mid = size / 2;
        node* current = head;

        // Traverse to the middle node
        for (int i = 0; i < mid; i++) {
            temp = current;
            current = current->next;
        }
        newNode->prev = current->prev; // Set newNode's prev to current's prev
        newNode->next = current; // Set newNode's next

        temp->next = newNode;
        current->prev = newNode;      
        


    }
    }
    void deltion()
    {
        node *temp = new node;
        head = head->next;
        head->prev = NULL;
        size--;
    }
    void deltion_at_end()
    {
        node *temp = new node;
        temp = head;
        if (head->next == NULL)
        {
            delete head;
            head = NULL;
        }
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->prev->next = NULL;
        size--;
    }
    void deleteMiddle()
    {
        size--;
        if (!head)
            return;

        node *slow = head;
        node *fast = head;

        while (fast && fast->next)
        {
            fast = fast->next->next;
            if (fast)
            {
                slow = slow->next;
            }
        }
        if (slow->prev)
        {
            slow->prev->next = slow->next;
        }
        if (slow->next)
        {
            slow->next->prev = slow->prev;
        }

        if (slow == head)
        {
            head = slow->next;
        }
        delete slow;
    }
    int Max()
    {

        node *temp = head;
        int maxValue = head->data;
        while (temp != NULL)
        {
            if (temp->data > maxValue)
            {
                maxValue = temp->data;
            }
            temp = temp->next;
        }

        return maxValue;
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
        cout<<"\nSize "<<size;
    }
    void display_reverse()
    {
        node *temp = new node;
        temp = tail;
        while (temp != NULL)
        {
            cout << temp->data << "\t";
            temp = temp->prev;
        }
    }
};
int main()
{
    list obj;
    obj.insert_front(2);
    obj.insert_front(3);
    obj.insert_front(4);
    obj.insert_front(5);
    obj.insert_front(6);
    

    cout << "Display: " << endl;
    obj.display();
    cout << endl; 

    obj.insert_in_middle(9);
    obj.insert_in_middle(44);
    //obj.insert_in_middle(77);

    cout << "Display: " << endl;
    obj.display();
    cout << endl; 
/*
    cout << "Reverse Display: " << endl;
    obj.display_reverse();
    cout << endl;

    cout << "Insertion at End: " << endl;
    obj.insert_End(6);
    obj.display();
    cout << endl;

    cout << "Insertion after given Node: " << endl;
    obj.insert_position(2, 7);
    obj.display();
    cout << endl;

    cout << "Deletion at the beggining" << endl;
    obj.deltion();
    obj.display();
    cout << endl;

    cout << "Deletion at the End" << endl;
    obj.deltion_at_end();
    obj.display();
    cout << endl;

    cout << "Deletion at the middle" << endl;
    obj.deleteMiddle();
    obj.display();
    cout << endl;

    cout << "Maximum Number" << endl;
    cout << obj.Max();
    cout << endl;
*/
    return 0;
}