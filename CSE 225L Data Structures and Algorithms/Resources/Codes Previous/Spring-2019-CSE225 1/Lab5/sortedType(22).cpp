#include "sortedtype.h"
#include <iostream>

using namespace std;
template<class ItemType>
sortedtype<ItemType>::sortedtype()
{
   length=0;
   currentPos=-1;
    //ctor
}
template<class ItemType>
void sortedtype<ItemType>::MakeEmpty()
{
   length=0;

    //ctor
}
template<class ItemType>
bool sortedtype<ItemType>::IsFull()
{

   return (length==MAX_ITEMS);
}
template<class ItemType>
int sortedtype<ItemType>::LenghtIs()
{

    return length;
}
template<class ItemType>
void sortedtype<ItemType>::ResetList()
{

   currentPos=-1;
    //ctor
}
template<class ItemType>
void sortedtype<ItemType>::GetNextItem(ItemType& item)
{

   currentPos++;
    item=info[currentPos];
    //ctor
}
template<class ItemType>
void sortedtype<ItemType>::DeleteItem(ItemType item)
{
    int location = 0;
    while (item != info[location])
        location ++;
    for(int index = location +1 ; index < length ; index++)
    {
        info[index -1] = info[index];
    }
    length--;
}
template <class ItemType>
void sortedtype<ItemType>::InsertItem(ItemType item)
{
    int location = 0;
    while (location < length)
    {
        if(item > info[location])
            location++;
        else
            break;
    }
    for(int index = length-1; index >= location; index--)
    {
        info[index+1] = info[index];

    }
    info[location] = item;
    length++;


}
template <class ItemType>
void sortedtype<ItemType>:: RetrieveItem(ItemType& item, bool& found)
{
    int mid, first = 0, last = length - 1;
    while (first <= last)
    {
        mid = (first+last)/2;
        if (info[mid] == item)
        {
            found = true;
	       return;
       }
       if (info[mid] < item)
       {
          first = mid +1;
       }
       else
       {
           last = mid - 1;
       }

    }
    found = false;
}
