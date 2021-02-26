#ifndef QUETYPE_H_INCLUDED
#define QUETYPE_H_INCLUDED
class FullQueue
{};
class EmptyQueue
{};
template<class ItemType>
class QueType
{
public:
    int f=5;
    QueType();
    QueType(int max);
    ~QueType();
    void MakeEmpty();
    bool IsEmpty();
    bool IsFull();
    void Enqueue(ItemType);
    void Dequeue();
    void Print();
    int maxQue;
private:
    int front;
    int rear;
    ItemType* items;
};
#endif // QUETYPE_H_INCLUDED
