#ifndef HEAP_H_INCLUDED
#define HEAP_H_INCLUDED

template<class T>
struct Heap
{
    void ReheapUp(int root,int bottom);
    void ReheapDown(int root,int bottom);
    T *elements;
    int numElements;
};

#endif // HEAP_H_INCLUDED
