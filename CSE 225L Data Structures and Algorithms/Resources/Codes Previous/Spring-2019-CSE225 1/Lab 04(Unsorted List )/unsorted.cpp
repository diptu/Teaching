#include "unsorted.h"
#include <iostream>
using namespace std;

template <class ItemType>
unsorted<ItemType>::unsorted()
{
    length = 0;
    currentPos = -1;
}
template <class ItemType>
void unsorted<ItemType>::MakeEmpty()
{
    length = 0;
}
template <class ItemType>
void unsorted<ItemType>::IsFull()
{
    if (length == MAX_ITEMS)
        cout<<"list is full"<<endl;

    else
        cout<<"list is not full"<<endl;

}
template <class ItemType>
int unsorted<ItemType>::LengthIs()
{
    return length;
}

template <class ItemType>
void unsorted<ItemType>::ResetList()
{
    currentPos = -1;
}
template <class ItemType>
void unsorted<ItemType>::GetNextItem(ItemType& item)
{
    currentPos++;
    item = info [currentPos] ;
}
template <class ItemType>
void unsorted<ItemType>::Insertitem(ItemType item)
{
    info[length] = item;
    length++;
}
template <class ItemType>
void unsorted<ItemType>::print(){
for(int i=0;i<length;i++)
{
    cout<<info[i]<<endl;
}
}
template <class ItemType>
bool unsorted<ItemType>::RetrieveItem(ItemType item)
{
    int location;
    for (location = 0; location < length; location++)
    {
        if(item != info[location]){

            return cout<<"item is not found. "<<endl;
            break;
        }
        else{
             return cout<<"item is found. "<<endl;
             break;
             }

}}
template <class ItemType>
void unsorted<ItemType>::DeleteItem(ItemType item)
{
    int location = 0;
    while (item != info[location])
        location++;
    info[location] = info[length - 1];
    length--;
}
