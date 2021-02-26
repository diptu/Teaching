#include <iostream>
#include "stacktype.h"
using namespace std;

template <class ItemType>
StackType<ItemType>::StackType()
{

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

  if (IsEmpty())

    throw EmptyStack();

  else

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
    try{
        	if (IsFull())

    throw FullStack();

  else

  {

    NodeType* location;

    location = new NodeType;

    location->info = newItem;

    location->next = topPtr;

    topPtr = location;

  }

    }
    catch(...)
    {
        cout<<"Stack is full"<<endl;
    }


}

template <class ItemType>
void StackType<ItemType>::Pop()
{
    try{
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
    catch(...)
    {
        cout<<"Stack is empty"<<endl;
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
