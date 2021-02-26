#include &quot;list.h&quot;
template <class T>;
class UnsortedList: protected SinglyLinkedList<class T>{
public:
UnsortedList(){}
~UnsortedList(){}
//make the following members of ancestor classes
//publicly accessible which are now protected members
//of UnsortedList class (because of protected inheritance)
using SinglyLinkedList<class T>::isEmpty;
using SinglyLinkedList<class T>::searchItem;
using SinglyLinkedList<class T>::reset;
using SinglyLinkedList<class T>::nextItem;
using SinglyLinkedList<class T>::hasNext;
//functions specific to UnsortedList class
virtual void insertItem(T value);
virtual void deleteItem(T value);
};
/* Linked List based implementation of SortedList */
template<class T>
class SortedList: public UnsortedList<class T>{
public:
SortedList(){}
~SortedList(){}
//functions specific to SortedList class
virtual void insertItem(T value);
};
