#include "sortedtype.h"
<class ItemType>
SortedType<ItemType>::sortedtype()
{
length = 0;
currentPos = -1;
}

template<class ItemType>
void SortedType<ItemType>:: MakeEmpty()
{
    length = 0;
}


template<class ItemType>
bool SortedType<ItemType>:: IsFull()
{

}


template<class ItemType>
int SortedType<ItemType>:: LengthIs()
{

}


template<class ItemType>
void SortedType<ItemType>:: ResetList()
{
    currentPos = -1;
}


template<class ItemType>
void SortedType<ItemType>::GetNextItem(ItemType&item)
{
    currentPos++;
    item = info[currentPos];
}

template<class ItemType>
void SortedType<ItemType>::InsertItem(ItemTypeitem)
{


}

template<class ItemType>
void SortedType<ItemType>::DeleteItem(ItemTypeitem)
{
    int location = 0;
    while (item!=info[location])
        location++;
    for(int index = location+1;index<length;index++)
        info[index-1] = info[index];
    length--;
}

template<class ItemType>
void SortedType<ItemType>::RetrieveItem(ItemType&,bool& found)
{


}
