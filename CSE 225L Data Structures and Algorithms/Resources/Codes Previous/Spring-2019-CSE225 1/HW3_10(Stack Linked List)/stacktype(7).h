#ifndef STACKTYPE_H_INCLUDED
#define STACKTYPE_H_INCLUDED

class FullStack
{

};

class EmptyStack
{

};
template <class ItemType>
class StackType
{
    struct Node
    {
        ItemType data;
        Node* next;
    };
public:
    StackType();
    ~StackType();
    bool isEmpty();
    bool isFull();
    void push(ItemType);
    void pop();
    ItemType top();
    int  priority(ItemType ch);

private:
    Node* topPtr;

};
#endif // STACKTYPE_H_INCLUDED

