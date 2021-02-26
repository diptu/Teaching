#include <iostream>
#include "stacktype.h"
using namespace std;

template <class ItemType>
StackType<ItemType>::StackType() {

    topPtr = NULL;

}

template <class ItemType>
bool StackType<ItemType>::IsEmpty()
{
    return (topPtr == NULL);

}

template <class ItemType>
ItemType StackType<ItemType>::Top()
{
    //writte the code

    return topPtr->info;

}

template <class ItemType>
bool StackType<ItemType>::IsFull()
{
    NodeType* location;
    try
    {
        location = new NodeType;
        delete location;
        return false;
    }
    catch(bad_alloc& exception)
    {
        return true;
    }
}

template <class ItemType>
void StackType<ItemType>::Push(ItemType newItem)
{
	//Write the code

    try
    {
    if(!IsFull())
    {NodeType *newNode;
    newNode=new NodeType;
    newNode->info=newItem;
    newNode->next=topPtr;
    topPtr=newNode;}
    }
    catch(FullStack obj)
    {
        cout<<"Stack is FULL!\n";
    }
}

template <class ItemType>
void StackType<ItemType>::Pop()
{

    if (IsEmpty())
        throw EmptyStack();
    else
    {

        NodeType* tempPtr;
        tempPtr = topPtr;
        topPtr = topPtr->next;
        delete tempPtr;
    }
}

template <class ItemType>
StackType<ItemType>::~StackType() {
    NodeType* tempPtr;
    while (topPtr != NULL)
    {
        tempPtr = topPtr;
        topPtr = topPtr->next;
        delete tempPtr;
    }

}
