#ifndef QUEUETYPE_QUETYPE_H
#define QUEUETYPE_QUETYPE_H

class fullQueue{};
class emptyQueue{};

template <class ItemType>
class QueType
{
private:
    int front;
    int rear;
    ItemType *items;
    int maxQue;
public:
    QueType(int);
    QueType();
    ~QueType();
    void makeEmpty();
    bool isfull();
    bool isEmpty();
    void enQueue(ItemType);
    void deQueue(ItemType&);
};


#endif //QUEUETYPE_QUETYPE_H
