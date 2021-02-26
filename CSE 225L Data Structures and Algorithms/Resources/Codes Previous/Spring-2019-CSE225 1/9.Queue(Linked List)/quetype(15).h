#ifndef QUETYPE_H
#define QUETYPE_H
class FullQueue{};

class EmptyQueue{};

template<class
ItemType> class Quetype
{

    struct Nodetype{
        ItemType info;
        NodeType* next;
    };
public:
    Quetype();
    ~Quetype();
    void MakeEmpty(ItemType);
    void Enqueue(ItemType&);
    bool IsEmpty();
    bool IsFull();

private:
    Nodetype *front, *rear;
    };
#endif // QUETYPE_H
