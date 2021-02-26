#include &quot;list.h&quot;
template&lt;class T&gt;
class UnsortedList: protected SinglyLinkedList&lt;T&gt;{
public:
UnsortedList(){}
~UnsortedList(){}
//make the following members of ancestor classes
//publicly accessible which are now protected members
//of UnsortedList class (because of protected inheritance)
using SinglyLinkedList&lt;T&gt;::isEmpty;
using SinglyLinkedList&lt;T&gt;::searchItem;
using SinglyLinkedList&lt;T&gt;::reset;
using SinglyLinkedList&lt;T&gt;::nextItem;
using SinglyLinkedList&lt;T&gt;::hasNext;
//functions specific to UnsortedList class
virtual void insertItem(T value);
virtual void deleteItem(T value);
};
/* Linked List based implementation of SortedList */
template&lt;class T&gt;
class SortedList: public UnsortedList&lt;T&gt;{
public:
SortedList(){}
~SortedList(){}
//functions specific to SortedList class
virtual void insertItem(T value);
};
