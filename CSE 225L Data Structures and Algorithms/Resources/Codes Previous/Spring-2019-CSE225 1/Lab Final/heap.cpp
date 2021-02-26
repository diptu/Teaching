#include "heap.h"

template<class T>
void Swap(T &a,T &b)
{
    T temp;
    temp=a;
    a=b;
    b=temp;
}

template<class T>
void Heap<T>::ReheapUp(int root,int bottom)
{
    int parent;

    if(bottom>root)
    {
        parent=(bottom-1)/2;
        if(elements[bottom]<elements[parent])
        {
            Swap(elements[bottom],elements[parent]);
            ReheapUp(root,parent);
        }
    }
}

template<class T>
void Heap<T>::ReheapDown(int root,int bottom)
{
    int minChild,leftChild,rightChild;

    leftChild=2*root+1;
    rightChild=2*root+2;

    if(leftChild<=bottom)
    {
        if(leftChild==bottom)
            minChild=leftChild;
        else
        {
            if(elements[leftChild]<=elements[rightChild])
                minChild=leftChild;
            else
                minChild=rightChild;
        }
        if(elements[root]>elements[minChild])
        {
            Swap(elements[root],elements[minChild]);
            ReheapDown(minChild,bottom);
        }
    }

}


