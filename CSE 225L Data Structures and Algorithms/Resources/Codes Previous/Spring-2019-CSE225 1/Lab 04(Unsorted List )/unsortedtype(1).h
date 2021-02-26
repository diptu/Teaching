#ifndef UNSORTEDTYPE_H
#define UNSORTEDTYPE_H
#include <iostream>
using namespace std;
const int MAX_ITEMS = 10;

class unsortedtype
{
    private:
        int length;
        int info[MAX_ITEMS];
        int currentPos;

    public:
        unsortedtype();
        void InsertItem(int);
        bool SearchItem(int);
        void DeleteItem(int);
        int GetNextItem();
        int LengthIs();
        bool IsFull();
        bool IsEmpty();
        void ResetList();
        void MakeEmpty();


};

#endif // UNSORTEDTYPE_H
