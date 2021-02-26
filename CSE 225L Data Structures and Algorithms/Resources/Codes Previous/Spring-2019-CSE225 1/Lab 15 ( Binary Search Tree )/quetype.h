
#ifndef QUETYPE_H_INCLUDED
#define QUETYPE_H_INCLUDED
class FullQueue {};
class EmptyQueue {} ;

template <class ItemType>
class QueType {
private :
    int Front , rear , maxQue ;
    ItemType* items ;
public:
    QueType() ;
    QueType(int max) ;
    ~QueType() ;
    void MakeEmpty () ;
    bool IsEmpty () ;
    bool IsFull () ;
    void Enqueue (ItemType) ;
    void Dequeue (ItemType&) ;


} ;
#endif // QUETYPE_H_INCLUDED
