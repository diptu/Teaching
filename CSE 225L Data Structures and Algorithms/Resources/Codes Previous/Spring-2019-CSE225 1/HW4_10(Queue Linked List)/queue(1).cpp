#include <iostream>
#include "queue.h"
using namespace std;

template <class ItemType>
QueueType<ItemType>::QueueType() {

    topPtr = NULL;

}

template <class ItemType>
bool QueueType<ItemType>::IsEmpty()
{
    return (topPtr == NULL);

}

template <class ItemType>
ItemType QueueType<ItemType>::Top()
{
    return topPtr->info;
}

template <class ItemType>
bool QueueType<ItemType>::IsFull()
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
void QueueType<ItemType>::Push(ItemType newItem)
{
	if(IsFull())
        throw FullQueue();
    else
    {
        NodeType* temp=new NodeType;
        temp->info=newItem;
        temp->next=topPtr;
        topPtr=temp;
    }

}

template <class ItemType>
void QueueType<ItemType>::Pop()
{

    if (IsEmpty())
        throw EmptyQueue();
    else
    {

        NodeType* tempPtr;
        tempPtr = topPtr;
        topPtr = topPtr->next;
        delete tempPtr;
    }
}

template <class ItemType>
QueueType<ItemType>::~QueueType() {
    NodeType* tempPtr;
    while (topPtr != NULL)
    {
        tempPtr = topPtr;
        topPtr = topPtr->next;
        delete tempPtr;
    }

}
