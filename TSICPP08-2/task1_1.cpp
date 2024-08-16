#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    struct Node *random;

    Node(int x) {
        data = x;
        next = NULL;
        random = NULL;
    }
};

class Solution {
private:
    void insertAtTail(Node *&head, Node *&tail, int d) {
        Node *newNode = new Node(d);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

public:
    Node *copylist(Node *head) {
        if (!head) return NULL; // Handle empty list case

        Node *cloneHead = NULL;
        Node *cloneTail = NULL;

        Node *temp = head;
        while (temp != NULL) {
            insertAtTail(cloneHead, cloneTail, temp->data);
            temp = temp->next;
        }

        // Step 2: Insert nodes of Clone List in between originalList
        Node *originalNode = head;
        Node *cloneNode = cloneHead;

        while (originalNode != NULL && cloneNode != NULL) {
            Node *next = originalNode->next;
            originalNode->next = cloneNode;
            originalNode = next;

            next = cloneNode->next;
            cloneNode->next = originalNode;
            cloneNode = next;
        }

        // Step 3: Random pointer copy
        temp = head;
        while (temp != NULL) {
            if (temp->next != NULL) {
                temp->next->random = temp->random ? temp->random->next : NULL;
            }
            temp = temp->next->next;
        }

        // Step 4: Revert step 2 changes
        originalNode = head;
        cloneNode = cloneHead;

        while (originalNode != NULL && cloneNode != NULL) {
            originalNode->next = cloneNode->next;
            originalNode = originalNode->next;

            if (originalNode != NULL) {
                cloneNode->next = originalNode->next;
            }
            cloneNode = cloneNode->next;
        }

        // Step 5: Answer return
        return cloneHead;
    }

    void printList(Node *head) {
        cout << "[ ";
        while (head != NULL) {
            cout << "[" << head->data << ", ";
            if (head->random) {
                cout << head->random->data;
            } else {
                cout << "null";
            }
            cout << "] ";
            head = head->next;
        }
        cout << "]" << endl;
    }
};

int main() {
    Node *head = NULL;

    // Example input: head = [ [7, null] , [13, 0] , [11, 4] , [10, 2] , [1, 0] ]
    // Manually creating the nodes
    Node *first = new Node(7);
    Node *second = new Node(13);
    Node *third = new Node(11);
    Node *fourth = new Node(10);
    Node *fifth = new Node(1);

    // Linking nodes
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    // Setting random pointers (according to the example)
    first->random = NULL;   // 7 -> null
    second->random = first; // 13 -> 7
    third->random = fourth; // 11 -> 10
    fourth->random = third; // 10 -> 11
    fifth->random = second; // 1 -> 13

    head = first; // Set head of the original list

    Solution solution;
    // Print the original list
    cout << "Input: head = ";
    solution.printList(head);

    // Create a copy of the list
    Node *copiedList = solution.copylist(head);

    // Print the copied list
    cout << "Output: ";
    solution.printList(copiedList);

    // Free memory (optional, but good practice)
    // Note: In a real scenario, you should also free the copied list and original list nodes.

    return 0;
}