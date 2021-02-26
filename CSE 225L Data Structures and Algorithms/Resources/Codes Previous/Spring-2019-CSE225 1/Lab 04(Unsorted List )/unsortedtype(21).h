#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED

const int MAX_ITEMS=5;

template <class ItemType>
class Unsortedtype
{
    public:
        Unsortedtype();
        void MakeEmpty();
        bool IsFull();
        //bool DoesItExist(ItemType&);
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


#endif // UNSORTEDTYPE_H_INCLUDED
