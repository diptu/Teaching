#include "sorted.h"


template <class ItemType>
sorted <ItemType> ::sorted () {
    length = 0 ;
    currentPos = -1;
}

template <class ItemType>
int sorted <ItemType> :: LengthIs () {
    return length ;
}

template <class ItemType>
void sorted <ItemType> :: MakeEmpty () {
    length = 0;
}

template <class ItemType>
void sorted<ItemType> :: ResetList () {
    currentPos = -1 ;
}

template <class ItemType>
void sorted <ItemType> :: GetNextItem (ItemType& item) {
    currentPos ++ ;
    item = info[currentPos];
}

template <class ItemType>
void sorted<ItemType> :: InsertItem (ItemType item ) {
    int location = 0;
    while (location < length) {
        if (item > info[location]) {
            location++;
        }
        else
            break ;                         // it'll break at the position we need to put the value at
    }
    for (int index = length-1 ; index >= location ; index --) {             //sorting from big to small
        info [index+1] = info [index] ;  // on the first time running the loop , index+1 == length and index == length -1
    }
    info [location] = item ;
    length ++ ;

}


template <class ItemType>
void sorted <ItemType>::DeleteItem (ItemType item) {

    int location = 0 ;
    while (item != info [location]){
        location++ ;
    }
    for  ( int index = location +1 ; index < length ; index ++) {
        info [index-1] = info[index];
    }
    length -- ;
}

template <class ItemType>
void sorted <ItemType> :: RetrieveItem (ItemType& item , bool& found ) {
        int mid , first =0 , last = length -1 ;
        while (first <= last) {
            mid = first + (last-first) /2 ;                 // for even numbers will cause trouble otherwise , we'll use this one
            if (info[mid]== item) {
                found = true ;
                return ;
            }
            if (info [mid] < item )
                first = mid +1 ;
            else last = mid-1 ;
        }
        found = false ;
}

template <class ItemType>
bool sorted<ItemType> :: IsFull () {
    if (currentPos+1 == length)
        return true ;
    else
        return false;
}















