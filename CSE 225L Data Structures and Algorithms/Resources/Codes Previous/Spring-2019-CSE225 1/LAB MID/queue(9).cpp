#include"queue.h"
#include<bits/stdc++.h>
template <class ItemType>
QueType<ItemType>::QueType()
{
  front = NULL;
  rear = NULL;
}

template <class ItemType>
void QueType<ItemType>::reversed(int k)
{
    ItemType a[k+1];
    for(int i=0;i<k;i++)
    {
        ItemType x;
        this->Dequeue(x);
        a[i] = x;
    }
    QueType<ItemType> q;
    for(int i=k-1;i>=0;i--)
    {
        ItemType y = a[i];
        q.Enqueue(y);
    }
    while(!this->IsEmpty())
    {
        ItemType z;
        this->Dequeue(z);
        q.Enqueue(z);
    }
    while(!q.IsEmpty())
    {
        ItemType lol;
        q.Dequeue(lol);
        this->Enqueue(lol);
    }
}

template <class ItemType>
QueType<ItemType>::~QueType()
{
  MakeEmpty();
}

template <class ItemType>
bool QueType<ItemType>::IsEmpty()
{
  return (front == NULL);
}

template<class ItemType>
bool QueType<ItemType>::IsFull()
{
  NodeType* location;
  try
  {
    location = new NodeType;
    delete location;
    return false;
  }
  catch(std::bad_alloc& exception)
  {
    return true;
  }
}

template <class ItemType>
void QueType<ItemType>::Enqueue(ItemType newItem)
{
  if (IsFull())
    throw FullQueue();
  else
  {
    NodeType* newNode;

    newNode = new NodeType;
    newNode->info = newItem;
    newNode->next = NULL;
    if (rear == NULL)
      front = newNode;
    else
      rear->next = newNode;
    rear = newNode;
  }
}

template <class ItemType>
void QueType<ItemType>::Dequeue(ItemType& item)
{
  if (IsEmpty())
    throw EmptyQueue();
  else
  {
    NodeType* tempPtr;

    tempPtr = front;
    item = front->info;
    front = front->next;
    if (front == NULL)
      rear = NULL;
    delete tempPtr;
  }
}

template <class ItemType>
void QueType<ItemType>::MakeEmpty()
{
  NodeType* tempPtr;

  while (front != NULL)
  {
    tempPtr = front;
    front = front->next;
    delete tempPtr;
  }
  rear = NULL;
}


