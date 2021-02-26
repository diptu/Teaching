#include <iostream>
#include "stack.h"
using namespace std;

template <class ItemType>
StackType<ItemType>::StackType() {

    topPtr = NULL;
    maxitem = 0;

}

template <class ItemType>
bool StackType<ItemType>::IsEmpty()
{
    return (topPtr == NULL);

}

template <class ItemType>
ItemType StackType<ItemType>::getMax()
{

    StackType<ItemType> St;
    while(!this->IsEmpty())
    {
        ItemType x = this->Top();
        St.Push(x);
        if(x>maxitem)
        {
            maxitem = x;
        }
        this->Pop();
    }
    while(!St.IsEmpty())
    {
        ItemType y = St.Top();
        this->Push(y);
        St.Pop();
    }
    return maxitem;
}

template <class ItemType>
ItemType StackType<ItemType>::Top()
{
    //writte the code
    if (IsEmpty())
    {
        throw EmptyStack();
    }
    else
    {
        return topPtr->info;
    }

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
	if (IsFull())
    {
        throw FullStack();
    }
    else
    {
        NodeType* location;
        location = new NodeType;
        location->info = newItem;
        location->next = topPtr;
        topPtr = location;
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
