#ifndef LAB5_SORTEDTYPE_H
#define LAB5_SORTEDTYPE_H

const int MAX_ITEMS = 5;
template <class ItemType>
class SortedType
{
public :
    SortedType();
    void MakeEmpty();
    bool IsFull();
    int LengthIs();
    void InsertItem(ItemType);
    void DeleteItem(ItemType);
    void RetrieveItem(ItemType&,bool&);
    void ResetList();
    void GetNextItem(ItemType&);
private:
    int length;
    ItemType info[MAX_ITEMS];
    int currentPos;
};


#endif //LAB5_SORTEDTYPE_H
