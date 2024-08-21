/*
Assignment 13

Task 1.0

Binary Tree 


*/

#include <iostream>
using namespace std;

struct Node
{
    int key;     // Value of the node
    Node *left;  // Pointer to the left child
    Node *right; // Pointer to the right child
    Node(int item)
    {
        key = item;
        left = NULL;
        right = NULL;
    }
};
Node *insertValues(Node *node, int key)
{
    if (node == NULL)
    {
        return new Node(key);
    }
    if (node->key < key)
    {
        node->right = insertValues(node->right, key);
    }
    else
        node->left = insertValues(node->left, key);

    return node;
}
void inorder(Node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->key << " ";
        inorder(root->right);
    }
}
void preorder(Node *root)
{
    if (root != NULL)
    {
        cout << root->key << " ";
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(Node *root)
{
    if (root != NULL)
    {

        postorder(root->left);
        postorder(root->right);
        cout << root->key << " ";
    }
}

int main()
{
    Node *root = new Node(50);
    root = insertValues(root, 30);
    root = insertValues(root, 20);
    root = insertValues(root, 40);
    root = insertValues(root, 70);
    root = insertValues(root, 60);
    root = insertValues(root, 80);

    // Print inorder traversal of the BST
    cout<<"Inorder "<<endl;
    inorder(root);
    cout<<endl;

    cout<<"Preorder "<<endl;
    preorder(root);
    cout<<endl;

    cout<<"Postorder "<<endl;
    postorder(root);


    return 0;
}