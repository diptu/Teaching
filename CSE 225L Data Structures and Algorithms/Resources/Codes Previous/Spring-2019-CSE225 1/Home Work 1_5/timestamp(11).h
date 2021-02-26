#ifndef TIMESTAMP_H
#define TIMESTAMP_H

template<class ItemType>
class timeStamp
{
    public:
        timeStamp(ItemType  ,ItemType);
        void insertitem();
        void getnextitem(ItemType,ItemType,ItemType&);

        void deleteitem();

        ~timeStamp();

    protected:

    private:
          ItemType row;
           ItemType column;
       ItemType **matrix;

};

#endif // TIMESTAMP_H
