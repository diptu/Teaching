#ifndef BINARYNUMBER_H_INCLUDED
#define BINARYNUMBER_H_INCLUDED

class FullQueue
{

};

class EmptyQueue
{

};

class BinaryNumber
{
public:
    BinaryNumber();
    BinaryNumber(int max);
    ~BinaryNumber();
    void MakeEmpty();
    bool IsFull();
    bool IsEmpty();
    void Enqueue(int);
    void Dequeue(int&);

private:
    int front;
    int rear;
    int * items;
    int maxQue;
};
#endif // BINARYNUMBER_H_INCLUDED
