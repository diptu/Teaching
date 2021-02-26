#ifndef LIST_H
#define LIST_H
template&lt;
class T&gt;
class SinglyLinkedListWithTail : public SinglyLinkedList&lt;T&gt;{
protected:
node&lt;T&gt; *tail;
public:
SinglyLinkedListWithTail();
~SinglyLinkedListWithTail();
virtual void insertAtStart(T value);
virtual void insertAtEnd(T value);
virtual void deleteEnd();
};
#endif // LIST_H
