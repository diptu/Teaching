#include "stacktype.h"
#include <iostream>
using namespace std;

template <class ItemType>
int StackType<ItemType>::getMax()
{
    int maximum=Top();
    if(IsEmpty())
        throw EmptyStack();
    else {
            StackType<ItemType>t1,t2;
            while(!IsEmpty())
            {
                t1.Push(Top());
                Pop();
            }
            while(!t1.IsEmpty())
            {
                if(maximum<t1.Top())
                {
                    maximum=t1.Top();
                }
                Push(t1.Top());
                t1.Pop();
            }
    }
    return maximum;
}

template <class ItemType>
StackType<ItemType>::StackType()
{
    top=-1;
}

template <class ItemType>
bool StackType<ItemType>::IsEmpty()
{
    return (top==-1);
}

template <class ItemType>
bool StackType<ItemType>::IsFull()
{
    return (top==MAX_ITEMS-1);
}

template <class ItemType>
void StackType<ItemType>::Push(ItemType newItem)
{
    try{
        if(IsFull())
            throw FullStack();
        top++;
        items[top]=newItem;

    }
    catch(FullStack f)
    {
        cout << "Stack is Full!\n";
    }
}

template <class ItemType>
void StackType<ItemType>::Pop()
{
    try{
        if(IsEmpty())
            throw EmptyStack();
        top--;
        }
    catch(EmptyStack f)
    {
        cout << "Stack is Empty\n";
    }
}

template <class ItemType>
ItemType StackType<ItemType>::Top()
{
    return items[top];
}
