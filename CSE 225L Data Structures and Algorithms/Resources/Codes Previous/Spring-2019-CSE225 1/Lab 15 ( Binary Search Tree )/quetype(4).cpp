#include <iostream>
#include "quetype.h"
using namespace std;
template<class ItemType>
QueType<ItemType>::QueType() {

    front=NULL;
    rear=NULL;

}

template<class ItemType>
bool QueType<ItemType>::IsEmpty()
{
return (front == NULL);

}


template<class ItemType>
bool QueType<ItemType>::IsFull()
{
NodeType *location;
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
    NodeType* Node;

    Node = new NodeType;
    Node->info = newItem;
    Node->next = NULL;
    if (rear == NULL)
      front = Node;
    else
      rear->next = Node;
    rear = Node;

}



template<class ItemType>
void QueType<ItemType>::Dequeue(ItemType& item)
{

    NodeType* tempPtr;

    tempPtr = front;
    item = front->info;
    front = front->next;
    if (front == NULL)
      rear = NULL;
    delete tempPtr;

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

