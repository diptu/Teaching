#include "StackType.h"
#include <iostream>

using namespace std;

template <class ItemType>
StackType<ItemType>::StackType()
{
    top = -1;
}

template <class ItemType>
bool StackType<ItemType>::IsEmpty()
{
    return (top == -1);
}

template <class ItemType>
void StackType<ItemType>::MakeEmpty()
{
    top = -1;
}

template <class ItemType>
bool StackType<ItemType>::IsFull()
{
    return (top ==  MAX_ITEMS-1);
}

template <class ItemType>
void StackType<ItemType>::Push(ItemType newItem)
{
    if( IsFull() ){
        throw FullStack();
    }
    top++;
    items[top] = newItem;
}

template <class ItemType>
void StackType<ItemType>::Pop()
{
    if( IsEmpty() ){
         throw EmptyStack();
    }
    top--;
}

    template <class ItemType>
void StackType<ItemType>::getMax()
{
int a=0;
for(int i=0;i<c;i++){

   if (IsEmpty()){
        throw EmptyStack();
        }

   else if(items[i+1]>items[i]){
    a=items[i+1];
    }
}
    cout<<"max item is :"<<a<<endl;
}
