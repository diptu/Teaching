#ifndef QUETYPE_H_INCLUDED
#define QUETYPE_H_INCLUDED

class FullQueue
{

};
class EmptyQueue
{

};
template <class ItemType>
class QueType
{
public:
    QueType();
    QueType(int);
    ~QueType();
    void makeEmpty();
    bool isFull();
    bool isEmpty();
    void Enqueue(ItemType);
    void Dequeue(ItemType&);
private:
    int fr;
    int rear;
    ItemType* items;
    int maxQue;

};
#endif // QUETYPE_H_INCLUDED
