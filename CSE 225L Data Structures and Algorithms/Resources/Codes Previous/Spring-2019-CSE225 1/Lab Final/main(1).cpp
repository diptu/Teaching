#include <iostream>
//#include"quetype.cpp"
#include "binarysearchtree.cpp"
using namespace std;

struct Node {
int data ;
Node *left, *right;
};
Node* nnode (int key) {
    Node * node = new Node ;
    node->data = key ;
    node->left=node->right= NULL;
    return node ;
}
void inorder(Node* tree ) {
    if (tree == NULL) return;
    inorder(tree->left);
    cout<<tree->data << " " ;
    inorder(tree->right);
}

Node* Insert (Node* tree , int key ){
    if (tree ==NULL)
        return nnode(key) ;
    if (key < tree->data)
        tree->left = Insert( tree->left,key) ;
    else
        tree->right = Insert(tree->right,key ) ;

    return tree ;
}

int sum (Node* tree) {
    if (tree == NULL)
    return 0 ;
    return tree->data+ sum(tree->left) + sum (tree->right) ;
}

void update (Node* tree, int &s) {
    if (tree == NULL) return ;
    update(tree->left, s) ;
    s -= tree->data ;
    tree->data += s ;
    update (tree->right, s) ;
}

int main()
{   Node* tree = NULL ;
    int keys[] = {5,3,2,4,6,8,10} ;
    int n = sizeof(keys)/sizeof(keys[0]);
    for (int key: keys) {  //
            tree = Insert(tree,key) ;
    }
    int s = sum(tree) ;
    update(tree,s) ;
    inorder(tree) ;

    return 0;
}
