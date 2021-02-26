#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED

const int MAX_ITEMS=5;

template <class ItemType>
class UnsortedType
{
    public:
        UnsortedType();
        void MakeEmpty();
        bool Isfull();
        int LengthIs();
        void InsertItem(ItemType);
        void DeleteItem(ItemType&, bool&);
        void ResetList();
        void GetNextItem(ItemType&);

    private:
        int length;
        ItemType info[MAX_ITEMS];
        int currentPos;

};



#endif // UNSORTEDTYPE_H_INCLUDED
