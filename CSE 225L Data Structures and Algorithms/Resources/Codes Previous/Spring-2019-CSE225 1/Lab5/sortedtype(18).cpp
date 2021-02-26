#include "sortedtype.h"

template <class ItemType>
SortedType<ItemType>::SortedType() {
    length = 0;
    currentPos = -1;
}
template <class ItemType>
void SortedType<ItemType>::MakeEmpty() {
    length = 0;
}
template <class ItemType>
bool SortedType<ItemType>::IsFull() {
    return (length == MAX_ITEMS);
}
template <class ItemType>
int SortedType<ItemType>::LengthIs() {
    return length;
}
template <class ItemType>
void SortedType<ItemType>::ResetList() {
    currentPos = -1;
}
template <class ItemType>
void SortedType<ItemType>::GetNextItem(ItemType &item) {
    currentPos++;
    item = info[currentPos];
}
template <class ItemType>
void SortedType<ItemType>::InsertItem(ItemType item) {

    int srcIdx;
    for(int i = 0; i < length; i++) {
        if(info[i] > item) {
            srcIdx = i;
            break;
        }
    }
    for(int i = length - 1; i >= srcIdx; i--) {
        info[i] = info[i-1];
    }
    info[srcIdx] = item;
    length++;

}
template <class ItemType>
void SortedType<ItemType>::DeleteItem(ItemType item) {

    int location = 0;
    while(info[location] != item) {
        location++;
    }
    for(int i = location + 1; i < length; i++) {
        info[i-1] = info[i];
    }
    length--;

}
template <class ItemType>
void SortedType<ItemType>::RetrieveItem(ItemType &item, bool &found) {
    found = false;
    int first = 0, last = length -1, mid = 0;

    for(int i = 0; first <= last; i++) {
        mid = (first + last) / 2;

        if(item == info[mid]) {
            found = true;
            break;
        } else if(item < info[mid]) {
            last = mid - 1;
        } else if(item > info[mid]) {
            first = mid + 1;
        }
    }
}
