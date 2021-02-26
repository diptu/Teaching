#include "sortedtype.h"

template <class ItemType>
sortedtype<ItemType>::sortedtype()
{
    length=0;
    currentPos=-1;
}

template <class ItemType>
void sortedtype<ItemType>::MakeEmpty()
{
    length=0;
}

template <class ItemType>
bool sortedtype<ItemType>::IsFull()
{
   return (length==MAX_ITEMS);

}

template <class ItemType>
int sortedtype<ItemType>::LengthIs()
{
    return length;
}

template <class ItemType>
void sortedtype<ItemType>::ResetList()
{
    currentPos=-1;
}

template <class ItemType>
void sortedtype<ItemType>::GetNextItem(ItemType& item)
{
    currentPos++;
    item=info[currentPos];
}

template <class ItemType>
void sortedtype<ItemType>::InsertItem(ItemType item)
{
    int i;
    while(i<length)
    {
        if(item>info[i])
            i++;
        else
            break;
    }
    for(int j=length-1; j>=i; j--)
        info[j+1]=info[j];
        info[i]=item;
    length++;

}

template <class ItemType>
void sortedtype<ItemType>::DeleteItem(ItemType& item)
{
    int i=0;

    while(item!=info[i])
        i++;
    for(int j=i+1; j<length; j++)
        info[j-1]=info[j];
    length--;
}

template <class ItemType>
void sortedtype<ItemType>::RetrieveItem(ItemType& item, bool& found)
{
    int first=0;
    int last=length-1;
    int mid=(first+length)/2;

    while(first<=last)
    {
        if(info[mid]<item)
            {
                first=mid+1;
                mid=(first+last)/2;
            }
        else if(info[mid]>item)
            {
                last=mid-1;
                mid=(first+last)/2;
            }
        else
        {
            //item=info[mid];
            found=true;
            break;
        }
        found=false;
    }
}
