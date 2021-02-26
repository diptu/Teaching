#include "stacktype.h"
#include <iostream>

using namespace std;

template <class ItemType>
StackType<ItemType>::StackType()
{
    top=-1;
}

template <class ItemType>
bool StackType<ItemType>::IsFull()
{
    if(top==MAX_ITEMS-1)
        return true;
    else
        return false;
}

template <class ItemType>
bool StackType<ItemType>::IsEmpty()
{
    if(top==-1)
        return true;
    else
        return false;
}

template <class ItemType>
void StackType<ItemType>::Push(ItemType newItem)
{
    try
    {
      if(IsFull())
        throw FullStack();

      top++;
      items[top]=newItem;
    }

    catch(FullStack f)
    {
        cout<<"Stack is full"<<endl;
    }
}

template <class ItemType>
void StackType<ItemType>::Pop()
{
    try
    {
       if(IsEmpty())
        throw EmptyStack();

        top--;
    }
    catch(EmptyStack e)
    {
        cout<<"Stack is empty"<<endl;
    }
}

template <class ItemType>
ItemType StackType<ItemType>::Top()
{
    return items[top];
}
