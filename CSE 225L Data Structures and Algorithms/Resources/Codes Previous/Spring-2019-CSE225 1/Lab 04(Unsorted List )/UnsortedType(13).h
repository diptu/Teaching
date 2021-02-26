#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED
#include <iostream>
using namespace std;

const int MAX_ITEMS = 5;

template <class ItemType>
class UnsortedType {
  public:
    UnsortedType();
    void MakeEmpty();
    bool IsFull();
    int LengthIs();
    void InsertItem(ItemType);
    void DeleteItem(ItemType);
    void RetrieveItem(ItemType&, bool&);
    void ResetList();
    void GetNextItem(ItemType&);

  private:
    int length; // writing header
    ItemType info[MAX_ITEMS];
    int currentPos; // reading header
};

#endif // UNSORTEDTYPE_H_INCLUDED
