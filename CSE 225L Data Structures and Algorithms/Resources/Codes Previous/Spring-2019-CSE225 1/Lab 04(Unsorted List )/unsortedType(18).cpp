#include "unsortedType.h"
#include <iostream>
using namespace std;

template <class ItemType>
unsortedType<ItemType>::unsortedType()
{
    length = 0 ;
    currentPos = -1;
}
template <class ItemType>
void unsortedType<ItemType>::MakeEmpty()
{
    length = 0;
}
template <class ItemType>
bool unsortedType<ItemType>::isFull()
{
    return MAX_ITEMS == length;
}
template <class ItemType>
int unsortedType<ItemType>::LengthIS()
{
    return length;
}
template <class ItemType>
void unsortedType<ItemType>::RestList()
{
    currentPos = -1;
}
template <class ItemType>
void unsortedType<ItemType>::GetNextItem(ItemType& item)
{
    currentPos++;
    item = info[currentPos];
}
template <class ItemType>
void unsortedType<ItemType>::RetrieveItem(ItemType& item,bool& found)
{
    int location = 0;
    found = false;
    for(location = 0 ; location<length; location ++)
    {
       if(item == info[location])
          found = true;
          item = info[location];
          break;
    }
}
template <class ItemType>
void unsortedType<ItemType>::IntsertItem(ItemType item)
{
    if(length != MAX_ITEMS)
    {
        info[length] = item;
        length++;
    }
    else
    {
        cout << "List is full";
    }
}
template <class ItemType>
void unsortedType<ItemType>::DeleteItem(ItemType item)
{
    int location = 0;
    while (item != info[location])
        location++;
    info[location] = info[length -1];
    length--;
}
