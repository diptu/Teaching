#include "quetype.h"
#include <iostream>
using namespace std;

template<class ItemType>
QueType<ItemType>::QueType()
{
    front=NULL;
    rear=NULL;
}

template<class ItemType>
bool QueType<ItemType>::IsEmpty()
{
    return front==NULL;
}

template<class ItemType>
bool QueType<ItemType>::IsFull()
{
    NodeType* location;
    try
    {
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

    NodeType* temp=new NodeType;
    temp->info=newItem;
    temp->next=NULL;

    if(rear==NULL)
       {
           front=temp;
           rear=temp;
       }
    else
        {
            rear->next=temp;
            rear=temp;
        }

}

template<class ItemType>
void QueType<ItemType>::Dequeue(ItemType& item)
{
    try
    {
        if(IsEmpty())
            throw EmptyQueue();

        NodeType* temp;
        temp=front;
        item=front->info;
        front=front->next;
        delete temp;

        if(front==NULL)
            rear=NULL;
    }
    catch(...)
    {
        cout<<"Empty Queue"<<endl;
    }

}

template<class ItemType>
void QueType<ItemType>::MakeEmpty()
{
    NodeType* tempPtr;
    while(front!=NULL)
    {
        tempPtr=front;
        front=front->next;
        delete tempPtr;
    }
    rear=NULL;
}

template<class ItemType>
QueType<ItemType>::~QueType()
{
    MakeEmpty();
}
