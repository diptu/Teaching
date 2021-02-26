#include "quetype.h"
#include <iostream>
using namespace std;

template <class ItemType>
QueType<ItemType>::QueType()
{
    front=NULL;
    rear=NULL;
}

template<class ItemType>
QueType<ItemType>::~QueType()
{
    MakeEmpty();
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

template <class ItemType>
void QueType<ItemType>::Enqueue(ItemType newItem)
{
    try
    {
        if(IsFull())
            throw FullQueue();
        else
        {
            NodeType* temp;
            temp= new NodeType;
            temp->info=newItem;
            temp->next=NULL;
            if(IsEmpty())
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
    catch(FullQueue f)
    {
        cout<<"Queue is full"<<endl;
    }
}

template <class ItemType>
void QueType<ItemType>::Dequeue(ItemType& item)
{
    try
    {
        if(IsEmpty())
            throw EmptyQueue();
        else
        {
            NodeType* tempPtr=front;
            front=front->next;
            delete tempPtr;
        }
    }
    catch(EmptyQueue())
    {
        cout<<"Queue is Empty";
    }
}

template <class ItemType>
bool QueType<ItemType>::IsEmpty()
{

    return (rear==NULL && front==NULL);
}

template <class ItemType>
bool QueType<ItemType>::IsFull()
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

template<class ItemType>
void QueType<ItemType>::Display()
{
  NodeType *temp=front;
  while(temp!=NULL)
  {
      cout<<temp->info<<" ";
      temp=temp->next;
  }
  cout<<endl;

}
