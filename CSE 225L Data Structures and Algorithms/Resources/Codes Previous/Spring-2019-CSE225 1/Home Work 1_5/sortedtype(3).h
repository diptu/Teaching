#ifndef SORTEDTYPE_H_INCLUDED
#define SORTEDTYPE_H_INCLUDED

#include <iostream>
using namespace std;

const int MAX_ITEMS = 5;

template <class Itemtype>
class Sortedtype{
public:
    Sortedtype();
    void MakeEmpty();
    bool IsFull();
    int LengthIs();
    void InsertItem(Itemtype);
    void DeleteItem(Itemtype);
    void RetrieveItem(Itemtype&,bool&);
    void ResetList();
    void GetNextItem(Itemtype&);

private:
    int length;
    Itemtype info[MAX_ITEMS];
    int currentPos;
};
#endif // SORTEDTYPE_H_INCLUDED
