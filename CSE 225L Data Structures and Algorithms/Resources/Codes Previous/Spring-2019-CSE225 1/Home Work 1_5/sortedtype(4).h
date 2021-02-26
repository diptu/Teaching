#ifndef SORTEDTYPE_H
#define SORTEDTYPE_H

const int MAX_ITEMs=5;
template<class ItemType>
class sortedtype
{
public:
    sortedtype();
    void makeempty();
    bool isfull();
    int lenghts();
    void insertitem(ItemType);
    void deleteitem(ItemType);
    void retriveitem(ItemType &,bool &);
    void resetlist();
    void getnextitem(ItemType&);



    ~sortedtype();

protected:

private:
    int length;
    ItemType info[MAX_ITEMs];
    int currentpos;
};

#endif // SORTEDTYPE_H
