#ifndef QueueTYPE_H_INCLUDED
#define QueueTYPE_H_INCLUDED

class FullQueue{};
class EmptyQueue{};

template <class ItemType>
class QueueType
{
    struct NodeType
    {
        ItemType info;
        NodeType* next;

    };

    public:
        QueueType();
        ~QueueType();
        void Push(ItemType);
        void Pop();
        ItemType Top();
        bool IsEmpty();
        bool IsFull();

    private:
        NodeType* topPtr;

};

#endif // STACKTYPE_H_INCLUDED
