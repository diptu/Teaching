#include "unsortedtype.h"
#include <iostream>
using namespace std;


template <class ItemType>
Unsortedtype<ItemType>::Unsortedtype()
{
    length=0;
    currentPos=-1;
}

template <class ItemType>
void Unsortedtype<ItemType>::MakeEmpty()
{
    length=0;
//    currentPos=-1;
}

template <class ItemType>
bool Unsortedtype<ItemType>::IsFull()
{
    return length==MAX_ITEMS;
}

template <class ItemType>
int Unsortedtype<ItemType>::LengthIs()
{
    return length;
}

template <class ItemType>
void Unsortedtype<ItemType>::ResetList()
{
    currentPos=-1;
}

template <class ItemType>
void Unsortedtype<ItemType>::GetNextItem(ItemType &item)
{

    currentPos++;
    item=info[currentPos];
}

template <class ItemType>
void Unsortedtype<ItemType>::RetrieveItem(ItemType &item,bool &val)
{
    int i=0;
    while(i<length)
    {
        if(info[i]==item)
            {val=true; break;}
        else i++;
    }
    //if(!val)
    //val = false;
}

template <class ItemType>
void Unsortedtype<ItemType>::InsertItem(ItemType item)
{
    if(length<MAX_ITEMS)
        {
            info[length]=item;
            length++;
        }
    //else cout<<"List Bound Exceeded!\n";
}

template <class ItemType>
void Unsortedtype<ItemType>::DeleteItem(ItemType item)
{
    int location=0;
    while(item!=info[location])
        location++;
    info[location]=info[length-1];
    length--;

}
