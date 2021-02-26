#ifndef STACKTYPE_H
#define STACKTYPE_H
const int MAX_ITEMS=5;
class FullStack{

};
class EmptyStack{

};
template<class ItemType>
class stacktype
{
    public:
        stacktype();
        bool IsFull();
        bool IsEmpty();
        void Push(ItemType);
        void Pop();
        ItemType Top();

        ~stacktype();

    protected:

    private:
        int top;
        ItemType items[MAX_ITEMS];

};

#endif // STACKTYPE_H
