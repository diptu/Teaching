
#ifndef PQTYPE_H_INCLUDED
#define PQTYPE_H_INCLUDED
#include "cookie.h"
#include "cookie.cpp"

class FullPQ
{};
class EmptyPQ
{};

template<class ItemType>
class PQType
{
public:
    PQType(int);
    ~PQType();
    void MakeEmpty();
    bool IsEmpty();
    bool IsFull();
    void Enqueue(ItemType);
    void Dequeue(ItemType&);
private:
    int length;
    cookie<ItemType> items;
    int maxItems;
};


#endif // PQTYPE_H_INCLUDED
