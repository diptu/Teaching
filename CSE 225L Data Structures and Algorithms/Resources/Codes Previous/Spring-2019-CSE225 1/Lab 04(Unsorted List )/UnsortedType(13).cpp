#include "UnsortedType.h"

template <class ItemType>
UnsortedType<ItemType>::UnsortedType() {
    length = 0;
    currentPos = -1;
}
template <class ItemType>
void UnsortedType<ItemType>::MakeEmpty() {
    length = 0;
}
template <class ItemType>
bool UnsortedType<ItemType>::IsFull() {
    return (length == MAX_ITEMS);
}
template <class ItemType>
int UnsortedType<ItemType>::LengthIs() {
    return length;
}
template <class ItemType>
void UnsortedType<ItemType>::ResetList() {
    currentPos = -1;
}
template <class ItemType>
void UnsortedType<ItemType>::GetNextItem(ItemType &item) {
    currentPos++;
    item = info[currentPos];
}
template <class ItemType>
void UnsortedType<ItemType>::InsertItem(ItemType item) {
    if(IsFull()) {
        cout << "List is full. " << item << " can't be inserted." << endl;
    } else {
        info[length] = item;
        length++;
    }
}
template <class ItemType>
void UnsortedType<ItemType>::RetrieveItem(ItemType &item, bool &isFound) {
    isFound = false;

    for(int location = 0; location < length; location++) {
        if(info[location] = item) {
            isFound = true;
            break;
        }
    }
}
template <class ItemType>
void UnsortedType<ItemType>::DeleteItem(ItemType item) {
    int location = 0;
    while(item != info[location]) {
        location++;
    }
    info[location] = info[length - 1];
    length--;
}
