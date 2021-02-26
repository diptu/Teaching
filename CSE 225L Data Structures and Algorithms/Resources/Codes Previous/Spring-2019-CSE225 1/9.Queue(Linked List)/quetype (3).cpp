#include "quetype.h"
#include <iostream>
using namespace std;

template <class ItemType>
QueType<ItemType>::QueType()
{
    front = NULL;
    rear = NULL;
}

template <class ItemType>
QueType<ItemType>::~QueType()
{
    makeEmpty();
}

template <class ItemType>
void QueType<ItemType>::makeEmpty()
{
    NodeType* tempPtr;
    while(front!=NULL)
    {
        tempPtr=front;
        front=front->next;
        delete tempPtr;
    }
    rear = NULL;
}

template <class ItemType>
bool QueType<ItemType>::isFull()
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

template <class ItemType>
bool QueType<ItemType>::isEmpty()
{
    return (front==NULL && rear==NULL);
}

template <class ItemType>
void QueType<ItemType>::Enqueue(ItemType newItem)
{
    if(isFull())
        throw FullQueue();

    else
    {
        NodeType* temp = new NodeType;
        temp->data=newItem;
        temp->next=NULL;

        if(isEmpty())
        {
            front=rear=temp;
        }
        else
        {
            rear->next=temp;
            rear=temp;
        }
    }
}

template <class ItemType>
void QueType<ItemType>::Dequeue(ItemType& item)
{
    if(isEmpty())
        throw EmptyQueue();
    else
    {
        NodeType* temp = front;
        item=front->data;
        front=front->next;
        delete temp;
    }
}

template <class ItemType>
void QueType<ItemType>::Display()
{
    NodeType* temp=front;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
