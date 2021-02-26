#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

const int MAX_ITEMS = 5;

class FullStack
{

};
class EmptyStack
{

};

template <class ItemType>
class StackType
{
  public :
      StackType();
      bool IsFull();
      bool IsEmpty();
      void Push(ItemType);
      void Pop();
      ItemType Top();
      int getMax();

  private :
    int top;
    ItemType items[MAX_ITEMS];
};
#endif // STACKTYPE_H_INCLUDED
