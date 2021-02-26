#ifndef   QUETYPE_H
#define   QUETYPE_H


template <class ItemType>
class QueType
{
struct NodeType
     {
        ItemType info;
        NodeType* next;
            };
    public:
            QueType();
                      ~QueType();
                      void MakeEmpty();
                      void Enqueue(ItemType);
                      void Dequeue(ItemType&);
                      bool IsEmpty();
                      bool IsFull();
private:
            NodeType *front, *rear; };

#endif //   QUETYPE_H
