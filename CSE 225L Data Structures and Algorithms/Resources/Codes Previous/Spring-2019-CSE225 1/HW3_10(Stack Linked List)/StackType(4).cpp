#include <iostream>
#include "StackType.h"
using namespace std;


template <class Itemtype>
StackType<Itemtype>::StackType()
{
    top = NULL;
}

template <class ItemType>
StackType<ItemType>::~StackType()
{
    while (top != NULL)
    {
        pop();
    }
}
template <class ItemType>
bool StackType<ItemType>::isEmpty()
{
    return (top == NULL) ;
}

template <class ItemType>
bool StackType<ItemType>::isFull()
{
    NodeType* locatin;
    try
    {
     locatin = new NodeType;
     delete locatin;
        return false;
    }
    catch(bad_alloc& exception )
    {
        return true;
    }

}

template <class ItemType>
void StackType<ItemType>::push(ItemType newItem)
{
    try
    {
        if(isFull())
            throw FullStack();
        else
        {
            NodeType *location = new NodeType;
            location->info = newItem;
            location->next = top;
            top = location;

        }
    }
    catch (FullStack())
    {
        cout<<"Stack is full"<<endl;
    }

}

template <class ItemType>
void StackType<ItemType>::pop()
{
    try
    {
        if(isEmpty())
            throw EmptyStack();
        else
        {
            NodeType *temp;
            temp = top;
            top = top->next;
            delete temp;

        }
    }
    catch (EmptyStack())
    {
        cout<<"Stack is Empty"<<endl;
    }

}

template <class ItemType>
ItemType StackType<ItemType>::Top()
{

        if(isEmpty())
            throw EmptyStack();
        else

            return top->info;

}
