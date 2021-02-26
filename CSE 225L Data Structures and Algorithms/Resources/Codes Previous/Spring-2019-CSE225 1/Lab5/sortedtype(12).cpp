#include "sortedtype.h" template
<class itemType>
Sortedtype<ItemType>::SortedType()
{
    length = 0;
    currentPos = -1;
}
template <class ItemType>
void SortedType<ItemType>::MakeEmpty()
{
    length = 0;
}
template <class ItemType>
void SortedType<ItemType>::IsFull()
{

}
template <class ItemType>
void SortedType<ItemType>::LengthIs()
{

}
template <class ItemType>
void SortedType<ItemType>::ResetList()
{
    currentPos = -1;
}
template <class ItemType>
void
SortedType<ItemType>::GetNextItem(ItemType&
item)
{
    currentPos++;
    item = info [currentPos];
}
template <class ItemType>
void
SortedType<ItemType>::InserItem(ItemType&
item)
{

}
template <class ItemType>
void
SortedType<ItemType>::deleteItem(ItemType&
item)
{
    int location = 0;
    while (item ! = info[location])
        location++;
    for (int index = location = + 1; index<length; index++)
        info[index - 1] = info[index];
    length--;
}
template <class ItemType>
void
SortedType<ItemType>::RetrieveItem(ItemType&
item , bool& found)
{

}
