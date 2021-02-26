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
    struct NodeType
    {
        ItemType data;
        NodeType* next;
    };
public:
    QueType();
    ~QueType();
    void makeEmpty();
    bool isFull();
    bool isEmpty();
    void Enqueue(ItemType);
    void Dequeue(ItemType&);
    void Display();

private:
    NodeType *front, *rear;
};
#endif // QUETYPE_H_INCLUDED
