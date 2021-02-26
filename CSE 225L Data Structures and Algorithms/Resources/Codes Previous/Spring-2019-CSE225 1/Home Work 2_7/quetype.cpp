#include "quetype.h"
#include "iostream"
using namespace std ;

template <class ItemType>
QueType<ItemType> :: QueType (int max) {
        maxQue = max+1 ;
        Front = maxQue - 1 ;
        rear = maxQue -1 ;
        items = new ItemType [maxQue] ;
}
template <class ItemType>
QueType<ItemType> :: QueType () {
        maxQue = 501;
        Front = maxQue - 1 ;
        rear = maxQue -1 ;
        items = new ItemType [maxQue] ;
}
template <class ItemType>
QueType<ItemType> :: ~QueType() {
    delete [] items ;
}

template <class ItemType>
void QueType<ItemType> :: MakeEmpty () {
    Front = maxQue-1 ;
    rear = maxQue-1 ;
}

template <class ItemType>
bool QueType<ItemType> :: IsEmpty () {
    if (Front == rear)
        return true;
    else
        return false ;
}

template <class ItemType>
bool QueType<ItemType> :: IsFull () {
    return ((rear+1)%maxQue == Front);


}


template <class ItemType>
void QueType<ItemType> :: Dequeue (ItemType& item) {
   try { if (IsEmpty()) {
        throw EmptyQueue() ;
    }
    else {
        Front = (Front+1)%maxQue ;
        item = items[Front] ;
    } } catch (EmptyQueue obj) {
    cout<< "Underflow " <<endl ;
    }
}

template <class ItemType>
void QueType<ItemType> :: Enqueue (ItemType newItem) {
       try {
        if (IsFull()) {
        throw FullQueue() ;
    }
    else {
        rear = (rear+1)%maxQue ;
        items[rear] =  newItem  ;
    } } catch (FullQueue obj ) {
        cout <<"Queue overflow " << endl;
        }

}











