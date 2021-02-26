#include <iostream>
#include "sortedtype.h"
using namespace std;
template<class ItemType>
sortedtype<ItemType>::sortedtype()
{
    length=0;
    currentpos=-1;
}
template<class ItemType>
void sortedtype<ItemType>::makeempty()
{
    length=0;

}
template<class ItemType>
bool sortedtype<ItemType>::isfull()
{
    return (length==MAX_ITEMs);


}
template<class ItemType>
int sortedtype<ItemType>::lenghts()
{
    return length;

}
template<class ItemType>
void sortedtype<ItemType>::resetlist()
{
    currentpos=-1;


}
template<class ItemType>
void sortedtype<ItemType>::getnextitem(ItemType& item)
{
    currentpos++;
    item=info[currentpos];

}
template<class ItemType>
void sortedtype<ItemType>::insertitem(ItemType item)
{
    int location = 0;
    bool found = false;
    while (location < length && !found)
    {
        if (item < info[location])
            found = true;
        else
            location++;
    }
    for(int i=length; i>location; i--)
    {
        info[i] = info[i-1];
    }
    info[location] = item;
    length++;

}
template<class ItemType>
void sortedtype<ItemType>::deleteitem(ItemType item)
{
    int location=0;
    while(item!=info[location])
        location++;
    for(int index=location; index<length; index++)
        info[index-1]=info[index];
    length--;

}
template<class ItemType>
void sortedtype<ItemType>::retriveitem(ItemType& item,bool& found)
{

    int mid;
    int first = 0;
    int last = length- 1;
    found = false;
    while ((first<= last) && !found)
    {
        mid = (first + last) / 2;
        if (item < info[mid])
            last = mid - 1;
        else if (item > info[mid])
            first = mid + 1;
        else
        {
            found = true;
            item = info[mid];
        }
    }

}


template<class ItemType>
sortedtype<ItemType>::~sortedtype()
{
    //dtor
}
