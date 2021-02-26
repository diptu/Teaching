#ifndef UNSORTEDTYPE_H
#define UNSORTEDTYPE_H

const int MAX_ITEMS=5;
template<class ItemType>
class unsortedtype
{
    public:
        unsortedtype();
        void MakeEmpty();
        bool IsFull();
        int LenghtIs();
        void InsertItem(ItemType);
        void DeleteItem(ItemType);
        void RetrieveItem(ItemType&,bool&);
        void ResetList();
        void GetNextItem(ItemType&);
        void print();
        ~unsortedtype();

    protected:

    private:
        int lenght;
        ItemType info[MAX_ITEMS];
        int currentPos;

};

#endif // UNSORTEDTYPE_H
