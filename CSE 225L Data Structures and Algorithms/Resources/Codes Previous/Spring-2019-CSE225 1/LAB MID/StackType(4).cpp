#include "StackType.h"
template <class ItemType>
StackType<ItemType>::StackType(){
top = -1;
}
template<class ItemType>
bool StackType<ItemType>::IsEmpty()
{
  if(top==-1)
 return true;
 else
    return false;
}
template<class ItemType>
bool StackType<ItemType>::IsFull()
{
    if(top==MAX_Items-1)
        return true;
 else
    return false;
}

template <class ItemType>
void StackType<ItemType>::Push(ItemType newItem)
{

    try{
    if(IsFull())
        throw FullStack();
    top++;
    items[top]= newItem;


    }
    catch()
    {
        cout<<"Stack is Full"<<endl;
    }
}

template <class ItemType>
void StackType<ItemType>::Pop()
{
try{
    if(IsFull())
        throw FullStack();
    top--;



    }
    catch(StackType)
    {
        cout<<"Stack is Empty"<<endl;
    }

}
template <class Itemtype>
ItemType StackType<ItemType>::Top()
{
    if (IsEmpty())
        throw EmptyStack();
    return items[top];

}


