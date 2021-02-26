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

    else if(IsEmpty())
    {
        NodeType *temp=new NodeType;
        temp->info=newItem;
        temp->next=NULL;
        rear=temp;

        FRONT=temp;
    }

    else
    {
        NodeType *temp = new NodeType;
        temp->info=newItem;
        temp->next=NULL;
        rear->next=temp;
        rear=temp;

    }
}

template<class ItemType>
void QueType<ItemType>::Dequeue(ItemType& item)
{
    if(IsEmpty()) throw EmptyQueue();

    else
    {
        item=FRONT->info;
        NodeType *temp=new NodeType;
        temp=FRONT;
        FRONT=FRONT->next;
        delete temp;

        if(FRONT==NULL)
            rear=NULL;
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
