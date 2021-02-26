#include "quetype.h"
#include <iostream>
using namespace std;

template <class ItemType>
QueType<ItemType>::QueType()
{
    FRONT=NULL;
    rear=NULL;
}

template <class ItemType>
bool QueType<ItemType>::IsEmpty()
{
    return (FRONT==NULL & rear==NULL);
}

template<class ItemType>
bool QueType<ItemType>::IsFull()
{
    NodeType* location;
    try{
        location=new NodeType;
        delete location;
        return false;
    }
    catch(bad_alloc& exception)
    {
        return true;
    }
}

template<class ItemType>
void QueType<ItemType>::Enqueue(ItemType newItem)
{
    if(IsFull())
        throw FullQueue();

    else if(FRONT==NULL & rear==NULL)
    {
        NodeType *temp=new NodeType();
        temp->info=newItem;
        temp->next=NULL;

        FRONT=temp;
        rear=temp;
    }

    else
    {
        NodeType *temp=new NodeType();
        temp->info=newItem;
        temp->next=rear;

        rear=temp;
    }
}

template<class ItemType>
void QueType<ItemType>::Dequeue(ItemType& item)
{
    if(IsEmpty()) throw EmptyQueue();

    else
    {
        item=rear->info;
        NodeType *temp;
        temp=rear;
        rear=rear->next;
        delete temp;
        if(rear==NULL)
            FRONT=NULL;

    }
}

template<class ItemType>
void QueType<ItemType>::MakeEmpty()
{
    NodeType *tempPtr;
    while(FRONT!=NULL)
    {
        tempPtr=FRONT;
        FRONT = FRONT->next;
        delete tempPtr;
    }
    rear=NULL;
}

template<class ItemType>
QueType<ItemType>::~QueType()
{
    MakeEmpty();
}
