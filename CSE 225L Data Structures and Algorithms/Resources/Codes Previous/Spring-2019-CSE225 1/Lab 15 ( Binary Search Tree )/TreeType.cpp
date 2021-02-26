#include "TreeType.h"
#include "QueType.cpp"
#include <iostream>
using namespace std;

template <class ItemType>
TreeType<ItemType>::TreeType()
{
    root = NULL;
}

template <class itemtype>
void destroy(TreeNode<itemtype> *& tree)
{
    if(tree != NULL)
    {
        destroy(tree->left);
        destroy(tree->right);
        delete tree;
        tree = NULL;
    }
}



template <class Itemtype>
TreeType<Itemtype>::~TreeType()
{
    destroy(root);
}

template <class ItemtType>
void TreeType<ItemtType>::makeEmpty()
{
    destroy(root);
}

template <class Itemtype>
bool TreeType<Itemtype>::isEmpty()
{
    return  root == NULL ;
}

template <class ItemType>
bool TreeType<ItemType>::isFull()
{
    TreeNode<ItemType> *location;

    try
    {
      location = new TreeNode<ItemType> ;
      delete location;
        return false;
    }
    catch (bad_alloc& exception)
    {
        return true;
    }

}

template <class ItemType>
int countNodes(TreeNode<ItemType> *tree)
{
    if(tree == NULL)
        return 0;
    else
    {
        return countNodes(tree->left)+countNodes(tree->right)+1;
    }
}

template <class  ItemType>
int TreeType<ItemType>::lengthIs()
{
    return countNodes(root);
}

template <class ItemType>
void retrieve(TreeNode<ItemType> tree,ItemType &item,bool &found)
{
    if (tree == NULL)
        found = false ;
    else if(item < tree.info)
        retrieve(tree.left,item,found);
    else if(item > tree.right)
        retrieve(tree.right,item,found);
    else
    {
        item = tree.info;
        found = true;
    }
}

template <class ItemType>
void TreeType<ItemType>::retrieveItem(ItemType &item, bool &found)
{
    retrieve(root,item,found);
}


template <class ItemType>
void insert(TreeNode<ItemType> *tree,ItemType item)
{
    if (tree == NULL)
    {
        tree = new TreeNode<ItemType>;
        tree->right = NULL;
        tree->left = NULL;
        tree->info = item;
    }
    else if(item < tree->info)
        insert(tree->left,item);
    else
        insert(tree->right,item);
}

template <class ItemType>
void TreeType<ItemType>::insertItem(ItemType item)
{
    insert(root,item);
}

template <class ItemType>
void Delete(TreeNode<ItemType> *&tree,ItemType item)
{
    if(item < tree->info)
       Delete (tree->left,item);
    else if(item > tree->info)
        Delete(tree->right,item);
    else
        deleteNode(tree);
}


template <class ItemItem>
void deleteNode(TreeNode<ItemItem> *tree)
{
    ItemItem data;
    TreeNode<ItemItem> *temPtr;

    temPtr = tree ;
    if(tree->left == NULL)
    {
        tree = tree->right ;
        delete temPtr ;
    }
    else if(tree->right == NULL)
    {
        tree = tree->left;
        delete temPtr;
    }
    else
    {
        GetPredecessor(tree->left,data);
        tree->info = data;
        Delete (tree->left,data);
    }
}

template <class ItemType>
void GetPredecessor(TreeNode<ItemType> *tree,ItemType &data)
{
    while(tree->right != NULL)
        tree = tree->right;
    data = tree->info;
}


template <class  ItemItem>
void TreeType<ItemItem>::deleteItem(ItemItem item)
{
    Delete(root,item);
}



template <class ItemType>
void PreOrder(TreeNode<ItemType> *tree,QueType<ItemType> &Que)
{
    if(tree!=NULL)
    {
        Que.Enqueue(tree->info);
        PreOrder(tree->left,Que);
        PreOrder(tree->right,Que);
    }
}

template <class ItemType>
void InOrder(TreeNode<ItemType> *tree,QueType<ItemType> &Que)
{
    if(tree!=NULL)
    {
        InOrder(tree->left,Que);
        Que.Enqueue(tree->info);
        InOrder(tree->right,Que);
    }
}

template <class ItemType>
void PostOrder(TreeNode<ItemType> *tree,QueType<ItemType> &Que)
{
    if(tree!=NULL)
    {
        PostOrder(tree->left,Que);
        PostOrder(tree->right,Que);
        Que.Enqueue(tree->info);
    }
}


template <class ItemType>
void TreeType<ItemType>::resetTree(orderType order)
{
    switch (order)
    {
        case PRE_ORDER:
            PreOrder(root,preQue);
            break;
        case IN_ORDER:
            InOrder(root,inQue);
            break;
        case POST_ORDER:
            PostOrder(root,postQue);
            break;
    }
}

template <class ItemType>
void TreeType<ItemType>::getNextItem(ItemType &item, orderType order, bool &finished)
{
    finished = false;
    switch (order)
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


template <class ItemType>
void printTree(TreeNode<ItemType> *tree)
{
    if(tree != NULL)
    {
        printTree(tree->left);
        cout<<tree->info<<" ";
        printTree(tree->right);
    }

}

template <class ItemType>
void TreeType<ItemType>::print()
{
    printTree(root);
}
