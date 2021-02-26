#include "list.h"

template <class T>
class UnsortedList : protected SinglyLinkedList<T>
{
    public:
        UnsortedList(){}
        ~UnsortedList(){}
//make the following members of ancestor classes
//publicly accessible which are now protected members
//of UnsortedList class (because of protected inheritance)
    using SinglyLinkedList<T>::isEmpty;
    using SinglyLinkedList<T>::searchItem;
    using SinglyLinkedList<T>::reset;
    using SinglyLinkedList<T>::nextItem;
    using SinglyLinkedList<T>::hasNext;
//functions specific to UnsortedList class
    virtual void insertItem(T value);
    virtual void deleteItem(T value);
};
/* Linked List based implementation of SortedList */
template <class T>
class SortedList : public UnsortedList<T>
{
    public:
        SortedList(){};
        ~SortedList(){};
//functions specific to SortedList class
    virtual void insertItem(T value);
};
