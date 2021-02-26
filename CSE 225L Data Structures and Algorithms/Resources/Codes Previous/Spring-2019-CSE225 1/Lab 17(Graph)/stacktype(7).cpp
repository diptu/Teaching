#include <iostream>
#include "stacktype.h"
using namespace std;
template<class ItemType>
StackType<ItemType>::StackType()
{
    top = -1;
}
template<class ItemType>
bool StackType<ItemType>::IsEmpty()
{
    return (top == -1);
}
template<class ItemType>
bool StackType<ItemType>::IsFull()
{
    return (top == MAX_ITEMS-1);
}
template<class ItemType>
void StackType<ItemType>::Push(ItemType newItem)
{
    try
    {
        if(IsFull())
            throw FULLStack();
        top++;
        items[top] = newItem;
    }
    catch(FULLStack f)
    {
        cout << "Stack is FULL"<<endl;
    }


}
template<class ItemType>
void StackType<ItemType>::Pop()
{
      try
      {
          if(IsEmpty())
            throw EmptyStack();
          top--;
      }
      catch(EmptyStack f)
      {
          cout << "Stack is empty"<<endl;
      }
}
template<class ItemType>
ItemType StackType<ItemType>::Top()
{
    try
      {
          if(IsEmpty())
            throw EmptyStack();
          return items[top];
      }
      catch(EmptyStack f)
      {
          cout << "Stack is empty"<<endl;
      }
}
