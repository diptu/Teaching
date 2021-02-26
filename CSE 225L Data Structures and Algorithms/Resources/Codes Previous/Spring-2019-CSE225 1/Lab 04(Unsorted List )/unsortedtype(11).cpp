#include "unsortedtype.h"
template <class ItemType>

UnsortedType<ItemType> :: UnsortedType () {
    length = 0 ; currentPos = -1 ;
}
template <class ItemType>
void UnsortedType<ItemType> :: MakeEmpty () {
    length = 0 ;
}

template <class ItemType>
bool UnsortedType <ItemType> ::IsFull() {
    if (currentPos== length-1 )
        return true ;
    else
        return false ;

}
template <class ItemType>
int UnsortedType<ItemType> :: LengthIs () {
        return length ;
   // while (currentPos < length ){
     //   currentPos++;}
   // return currentPos ;
}
template <class ItemType>
void UnsortedType<ItemType> :: ResetList () {
    currentPos = -1 ;
}
template <class ItemType>
void UnsortedType<ItemType> :: GetNextItem (ItemType &item ) {  // here we'll take the value into a variable then print the variable itself
    currentPos++ ;
    item = info [currentPos] ;
}

template <class ItemType>
void UnsortedType<ItemType> :: RetrieveItem (ItemType &x , bool &b) {
    int i =0 ;
    for (i=0 ; i<length ; i++) {
        if (x == info[i] ) {
            b=true ;
            break ;
        }
        else b= false;

    }

}

template <class ItemType>
void UnsortedType<ItemType> :: InsertItem (ItemType item) {
    if (length < MAX_ITEMS)
    info [length] = item ;
         length++;
}
template <class ItemType>
void UnsortedType<ItemType> :: DeleteItem (ItemType item )  {
    int location = 0 ;
    while (item!= info[location])
        location ++ ;
    info [location] = info [length -1] ;
    length -- ;
}
