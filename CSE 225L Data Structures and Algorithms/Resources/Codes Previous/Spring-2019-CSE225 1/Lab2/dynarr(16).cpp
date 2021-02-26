#include "dynarr.h"

template <class ItemType>
DynArr<ItemType>::DynArr() {
    data = NULL;
    size = 0;
}
template <class ItemType>
DynArr<ItemType>::DynArr(int s) {
    data = new ItemType[s];
    size = s;
}
template <class ItemType>
DynArr<ItemType>::~DynArr() {
    delete [] data;
}
template <class ItemType>
ItemType DynArr<ItemType>::getValue(int index) {
    return data[index];
}
template <class ItemType>
void DynArr<ItemType>::setVaule(int index, ItemType value) {
    data[index] = value;
}
template <class ItemType>
void DynArr<ItemType>::allocate(int s) {
    if(data != NULL) {
        delete [] data;
    }
    data = new ItemType[s];
    size = s;
}
