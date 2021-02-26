#include <iostream>
#include "binarysearchtree.h"
#include "binarysearchtree.cpp"
#include "quetype.h"
#include "quetype.cpp"

using namespace std;
    struct Node
{
	int data;
	struct Node *left, *right;
};
struct Node* newNode(int item)
{
	struct Node* temp = new Node;
	temp->data = item;
	temp->left = temp->right = NULL;
	return temp;
}

void modify(struct Node *root, int *sum)
{
   if (root == NULL)  return;
  modify(root->right, sum);
    *sum = *sum + root->data;
    root->data = *sum;
   modify(root->left, sum);
}

// A wrapper over modifyBSTUtil()
void modifyBST(struct Node *root)
{
    int sum = 0;
    modify(root, &sum);
}

void inorder(struct Node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
       cout<< root->data << " " << endl;
        inorder(root->right);
    }
}
struct Node* insert(struct Node* node, int data)
{
    if (node == NULL)
        return newNode(data);
    if (data <= node->data)
        node->left  = insert(node->left, data);
    else
        node->right = insert(node->right, data);
    return node;
}

int main()
{

    struct Node *root = NULL;
    root = insert(root, 5);
    insert(root, 3);
    insert(root, 8);
    insert(root, 2);
    insert(root, 4);
    insert(root, 6);
    insert(root, 10);

    modifyBST(root);
    inorder(root);

    return 0;
}

