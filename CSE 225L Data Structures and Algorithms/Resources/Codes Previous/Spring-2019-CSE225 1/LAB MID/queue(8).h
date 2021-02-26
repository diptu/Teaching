#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
//#include "stack.h"
//#include "stack.cpp"
class FullQueue {};
class EmptyQueue {};

template <class ItemType>
class QueType
{
struct NodeType
     {
        ItemType info;
        NodeType* next;
            };
    public:
            QueType();
                      ~QueType();
                      void MakeEmpty();
                      void Enqueue(ItemType);
                      void Dequeue(ItemType&);
                      bool IsEmpty();
                      bool IsFull();
                      void reversed(int k);
private:
            NodeType *front, *rear; };


#endif // QUEUE_H_INCLUDED
