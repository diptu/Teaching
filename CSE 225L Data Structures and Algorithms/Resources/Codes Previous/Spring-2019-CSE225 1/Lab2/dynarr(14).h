#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED

template <class T>
class dynArr
{
    private:
        T **data;
        int i;
        int rows;
        int columns;

    public:
        dynArr();
        dynArr(int,int);
        ~dynArr();
        void allocate(int,int);
        void setValue(int,int,T);
        T getValue(int,int);
};

#endif
