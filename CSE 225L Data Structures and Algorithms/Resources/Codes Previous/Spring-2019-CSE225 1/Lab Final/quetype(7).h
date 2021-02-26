#ifndef QUEUETYPE_H_INCLUDED
#define QUEUETYPE_H_INCLUDED

class EmptyQueue {};
class FullQueue {};

template <class T>
class QueType {
    struct NodeType {
        T info;
        NodeType* next;
    };
  public:
    QueType();
    ~QueType();
    void MakeEmpty();
    void Enqueue(T);
    void Dequeue(T&);
    bool IsEmpty();
    bool IsFull();
  private:
    NodeType *front;
    NodeType *rear;

};

#endif // QUEUETYPE_H_INCLUDED

