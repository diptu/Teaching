#ifndef PQ_H_INCLUDED
#define PQ_H_INCLUDED
#include "heap.h"
#include "heap.cpp"
class FullPQ
{};
class EmptyPQ
{};

template <class T>
class PQ
{
    public:
        PQ(int);
        ~PQ();
        void MakeEmpty();
        bool IsFull();
        bool IsEmpty();
        void Enqueue(T);
        void Dequeue(T&);
    private:
        int length;
        Heap<T>items;
        int maxItems;

};
#endif // PQ_H_INCLUDED

