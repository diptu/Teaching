#include "StackType.h"
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
    return (top==MAX_ITEMS-1);
}

template <class ItemType>
bool StackType<ItemType>::IsEmpty()
{
    return (top==-1);
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
    catch(FullStack e)
    {
        cout<<"Stack is full."<<endl;
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
        cout<<"Stack is empty."<<endl;
    }
}

template <class ItemType>
ItemType StackType<ItemType>::Top()
{
    return items[top];
}

template <class ItemType>
ItemType StackType<ItemType>::getMax(StackType& st)
{
    int max=items[top];

    for(int i=1; st.IsEmpty(); i++)
    {
        if(max<=items[i])
        {
            max=items[i];
            break;
        }
        else
           continue;
    }

    return max;

}
