#ifndef QUEUETYPE_H_INCLUDED
#define QUEUETYPE_H_INCLUDED

class FullQueue
{};
class EmptyQueue
{};

template<class ItemType>
class QueueType
{
    public:
        QueueType();
        QueueType(int max);
        ~QueueType();
        void MakeEmpty();
        bool IsEmpty();
        bool IsFull();
        void Enqueue(ItemType);
        void Dequeue(ItemType&);

    private:
        int front;
        int rear;
        ItemType* items;
        int maxQue;
};

#endif // QUEUETYPE_H_INCLUDED
