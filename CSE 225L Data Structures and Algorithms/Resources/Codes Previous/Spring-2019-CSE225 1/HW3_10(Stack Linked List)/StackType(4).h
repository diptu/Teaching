#ifndef STACKLINKLIST_STACKTYPE_H
#define STACKLINKLIST_STACKTYPE_H

class FullStack{};
class EmptyStack{};

struct NodeType;
template <class ItemType>
class StackType {
    struct NodeType
    {
        ItemType info;
        NodeType* next;
    };

public:
    StackType();
    ~StackType();
    void push(ItemType);
    void pop();
    ItemType Top();
    bool isEmpty();
    bool isFull();

private:
    NodeType* top;

};

#endif //STACKLINKLIST_STACKTYPE_H
