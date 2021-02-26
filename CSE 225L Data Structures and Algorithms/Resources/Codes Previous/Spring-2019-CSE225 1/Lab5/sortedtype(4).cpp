#include "sortedtype.h"

template <class ItemType>
SortedType<ItemType>::SortedType()
{
    length=0;
    currentPos=-1;
}

template <class ItemType>
void SortedType<ItemType>::MakeEmpty()
{
    length=0;
}

template <class ItemType>
bool SortedType<ItemType>::IsFull()
{
    if(length==MAX_ITEMS)
        return true;
    else
        return false;
}

template <class ItemType>
int SortedType<ItemType>::LengthIs()
{
    return length;
}

template <class ItemType>
void SortedType<ItemType>::ResetList()
{
    currentPos=-1;
}

template <class ItemType>
void SortedType<ItemType>::GetNextItem(ItemType& item)
{
    currentPos++;
    item=info[currentPos];
}

template <class ItemType>
void SortedType<ItemType>::InsertItem(ItemType item)
{
    int location=0;
    while(location<length)
    {
        if(item>info[location])
            location++;
        else
            break;
    }
        for(int i=length-1;i>=location;i--)
            info[i+1]=info[i];

        info[location]=item;
        length++;

}

template <class ItemType>
void SortedType<ItemType>::DeleteItem(ItemType item)
{
    int location=0;
    if(item!=info[location])
        location++;
    for(int i=location+1;i<length;i++)
        info[i-1]=info[i];
    length--;
}

template <class ItemType>
void SortedType<ItemType>::RetrieveItem(ItemType& item, bool& found)
{
    int first,last,mid;
    first=0;
    last=length-1;
    found=false;
    while(first<=last)
    {
        mid=(first+last)/2;
        if(item==info[mid])
        {
            item=info[mid];
            found=true;
            return;
        }
        else if(item<info[mid])
            last=mid-1;
        else
            first=mid+1;
    }
}
