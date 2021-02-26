#ifndef SORTEDTYPE_H_INCLUDED
#define SORTEDTYPE_H_INCLUDED

const int MAX_ITEMS=5;
template<class ItemType>
class sortedtype
{
    public:
        sortedtype();
        void MakeEmpty();
        bool IsFull();
        int LenghtIs();
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

#endif // SORTEDTYPE_H_INCLUDED

