#include <iostream>
#include "stacktype.h"
using namespace std;
template<class ItemType>
stacktype<ItemType>::stacktype()
{
    top=-1;
}
template<class ItemType>
bool stacktype<ItemType>::IsEmpty()
{
return(top==-1);
}
template<class ItemType>
bool stacktype<ItemType>::IsFull()
{
return(top==MAX_ITEMS);
}
template<class ItemType>
void stacktype<ItemType>::Push(ItemType newItem)
{
    try{
    if(IsFull())
        throw FullStack();
    top++;
    items[top]=newItem;

    }

    catch(FullStack f)
    {

        cout<<"Stack is full";

    }
}

template<class ItemType>
void stacktype<ItemType>::Pop()
{

try{
    if(IsFull())
        throw EmptyStack();
    top--;


    }

    catch(EmptyStack e)
    {

        cout<<"Stack is full";

    }
}
template<class ItemType>
ItemType stacktype<ItemType>::Top()
{





    return items[top];



}


template<class ItemType>
stacktype<ItemType>::~stacktype()
{
    //dtor
}
