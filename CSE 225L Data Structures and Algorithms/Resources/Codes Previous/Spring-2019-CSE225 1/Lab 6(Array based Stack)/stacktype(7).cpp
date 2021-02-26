#include "stackType.h"
#include<iostream>
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
    try{
    if( IsFull() )
        throw FullStack();
    top++;
    items[top] = newItem;
}
   catch(FullStack f)
   {
       cout<<"stack is full"<<endl;
   }
}
template <class ItemType>
void StackType<ItemType>::Pop()
{
    if( IsEmpty() )
        throw EmptyStack();
    top--;
}
template <class ItemType>
ItemType StackType<ItemType>::Top()
{
    if (IsEmpty())
        throw EmptyStack();
    return items[top];
}
template <class ItemType>
void StackType<ItemType>::print(){
    for(int i=0;i<4;i++){
  cout<<items[i]<<endl;
}}

