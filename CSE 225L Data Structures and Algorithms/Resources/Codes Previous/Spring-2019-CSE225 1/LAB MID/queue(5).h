#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
class FullQueue
{};
class EmptyQueue
{};
template<class ItemType>
class QueType
{
public:
    QueType();
    QueType(int max);
    ~QueType();
    void MakeEmpty();
    bool IsEmpty();
    bool IsFull();
    void Enqueue(ItemType);
    void Dequeue(ItemType&);
    void reverse(int);
private:
    int front;
    int rear;
    ItemType* items;
    int maxQue;
};
#endif // QUETYPE_H_INCLUDED

