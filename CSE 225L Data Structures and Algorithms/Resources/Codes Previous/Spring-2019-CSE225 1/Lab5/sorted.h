#ifndef SORTED_H_INCLUDED
#define SORTED_H_INCLUDED

const int MAX_ITEMS = 5 ;

template <class ItemType>
class sorted {
private :
    int length ;
    ItemType info [MAX_ITEMS] ;
    int currentPos ;
public:
    sorted () ;
    void MakeEmpty () ;
    bool IsFull ();
    int LengthIs () ;
    void InsertItem (ItemType) ;
    void DeleteItem (ItemType) ;
    void RetrieveItem (ItemType& , bool&) ;
    void ResetList () ;
    void GetNextItem (ItemType&);

};
#endif // SORTED_H_INCLUDED
