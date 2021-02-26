#ifndef POSTFIX_H_INCLUDED
#define POSTFIX_H_INCLUDED

class FullStack
{

};

class EmptyStack
{

};
template <class ItemType>
class PostFix
{
    struct Node
    {
        ItemType data;
        Node* next;
    };
public:
    PostFix();
    ~PostFix();
    bool isEmpty();
    bool isFull();
    void push(ItemType);
    void pop();
    ItemType top();
    int  prec(ItemType ch);
    ItemType eval(char,ItemType,ItemType);

private:
    Node* topPtr;

};
#endif // POSTFIX_H_INCLUDED


