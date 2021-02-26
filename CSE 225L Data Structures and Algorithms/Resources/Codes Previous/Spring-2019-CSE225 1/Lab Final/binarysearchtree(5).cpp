#include "binarysearchtree.h"
#include "quetype.cpp"

template<class T>
TreeType<T>::TreeType()
{
    root = NULL;
}
template<class T>
void Destroy(TreeNode<T>*& tree)
{
    if(tree != NULL){
        Destroy(tree->left);
        Destroy(tree->right);
        delete tree;
        tree = NULL;
    }
}
template<class T>
TreeType<T>::~TreeType()
{
    Destroy(root);
}
template<class T>
void TreeType<T>::MakeEmpty()
{
    Destroy(root);
}
template<class T>
bool TreeType<T>::IsEmpty()
{
    return root == NULL;
}
template<class T>
bool TreeType<T>::IsFull()
{
    TreeNode<T>* location;
    try{
        location = new TreeNode<T>;
        delete location;
        return false;
    }
    catch(bad_alloc& exception){
        return true;
    }
}
template<class T>
int CountNodes(TreeNode<T>* tree)
{
    if(tree == NULL){
        return 0;
    }
    else{
        return CountNodes(tree->left) + CountNodes(tree->right) + 1;
    }
}
template<class T>
int TreeType<T>::LengthIs()
{
    return CountNodes(root);
}
template<class T>
void Retrieve(TreeNode<T>* tree, T& item, bool& found)
{
    if(tree == NULL){
       found = false;
    }
    else if(item < tree->info){
        Retrieve(tree->left, item, found);
    }
    else if(item > tree->info){
        Retrieve(tree->right, item, found);
    }
    else{
        item = tree->info;
        found = true;
    }
}
template<class T>
void TreeType<T>::RetrieveItem(T& item, bool& found)
{
    Retrieve(root, item, found);
}
template<class T>
void Insert(TreeNode<T>*& tree, T item)
{
    if(tree == NULL){
        tree = new TreeNode<T>;
        tree->right = NULL;
        tree->left = NULL;
        tree->info = item;
    }
    else if(item < tree->info){
        Insert(tree->left, item);
    }
    else{
        Insert(tree->right, item);
    }
}
template<class T>
void TreeType<T>::InsertItem(T item)
{
    Insert(root, item);
}
template<class T>
void Delete(TreeNode<T>*& tree, T item)
{
    if(item < tree->info){
        Delete(tree->left, item);
    }
    else if(item > tree->info){
        Delete(tree->right, item);
    }
    else{
        DeleteNode(tree);
    }
}
template<class T>
void DeleteNode(TreeNode<T>*& tree)
{
    T data;
    TreeNode<T>* tempPtr;

    tempPtr = tree;
    if(tree->left == NULL){
        tree = tree->right;
        delete tempPtr;
    }
    else if(tree->right == NULL){
        tree = tree->left;
        delete tempPtr;
    }
    else{
        GetPredecessor(tree->left, data);
        tree->info = data;
        Delete(tree->left, data);
    }
}
template<class T>
void GetPredecessor(TreeNode<T>* tree, T& data)
{
    while(tree->right != NULL){
        tree = tree->right;
    }
    data = tree->info;
}
template<class T>
void TreeType<T>::DeleteItem(T item)
{
    Delete(root, item);
}
template<class T>
void PreOrder(TreeNode<T>* tree, QueType<T>& Que)
{
    if(tree != NULL){
        Que.Enqueue(tree->info);
        PreOrder(tree->left, Que);
        PreOrder(tree->right, Que);
    }
}
template<class T>
void InOrder(TreeNode<T>* tree, QueType<T>& Que)
{
    if(tree != NULL){
        InOrder(tree->left, Que);
        Que.Enqueue(tree->info);
        InOrder(tree->right, Que);
    }
}
template<class T>
void PostOrder(TreeNode<T>* tree, QueType<T>& Que)
{
    if(tree != NULL){
        PostOrder(tree->left, Que);
        PostOrder(tree->right, Que);
        Que.Enqueue(tree->info);
    }
}
template<class T>
void TreeType<T>::ResetTree(OrderType order)
{
    switch(order){
        case PRE_ORDER:
            PreOrder(root, preQue);
            break;
        case IN_ORDER:
            InOrder(root, inQue);
            break;
        case POST_ORDER:
            PostOrder(root, postQue);
            break;
    }
}
template<class T>
void TreeType<T>::GetNextItem(T& item, OrderType order, bool& finished)
{
    finished = false;
    switch(order)
    {
    case PRE_ORDER:
        preQue.Dequeue(item);
        if(preQue.IsEmpty())
            finished = true;
        break;
    case IN_ORDER:
        inQue.Dequeue(item);
        if(inQue.IsEmpty())
            finished = true;
        break;
    case POST_ORDER:
        postQue.Dequeue(item);
        if(postQue.IsEmpty())
            finished = true;
        break;
    }
}
template<class T>
void PrintTree(TreeNode<T>* tree)
{
    if(tree != NULL){
        PrintTree(tree->left);
        cout << tree->info << " ";
        PrintTree(tree->right);
    }
}
template<class T>
void TreeType<T>::Print()
{
    PrintTree(root);
}












