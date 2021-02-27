#ifndef STACKTYPE_H_INCLUDED
#define STACKTYPE_H_INCLUDED

const int MAX_ITEMS = 5;

class FullStack{};
class EmptyStack{};

template <class ItemType>
class StackType
{
    public:
        int c=5;
        StackType();
        bool IsFull();
        bool IsEmpty();
        void MakeEmpty();
        void Push(ItemType);
        void Pop();
        ItemType Top();
        void getMax();
    private:
        int top;
        ItemType  items[MAX_ITEMS];
};
#endif // STACKTYPE_H_INCLUDED
