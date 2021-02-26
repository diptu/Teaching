#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED


const int MAX_ITEMS = 5;

template <class ItemType>
class unsortedType
{
public :
     unsortedType();
     void MakeEmpty();
     bool isFull();
     int LengthIS();
     void  IntsertItem(ItemType);
     void  DeleteItem(ItemType);
     void  RetrieveItem(ItemType&, bool&);
     void RestList();
     void GetNextItem(ItemType&);
private:
     int length;
     ItemType info[MAX_ITEMS];
     int currentPos;
};
#endif // UNSORTEDTYPE_HINCLUDED
