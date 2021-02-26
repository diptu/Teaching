#ifndef UNSORTED_H_INCLUDED
#define UNSORTED_H_INCLUDED

const int MAX_ITEMS =5;

template <class ItemType>
class unsorted
{
    public :
        unsorted();
        void MakeEmpty();
        void IsFull();
        int LengthIs();
        void Insertitem(ItemType);
        void print();
        void DeleteItem(ItemType);
        bool RetrieveItem(ItemType);
        void ResetList();
        void GetNextItem(ItemType&);
    private:
        int length;
        ItemType info[MAX_ITEMS];
        int currentPos;
};
#endif // UNSORTEDTYPE_H_INCLUDED

