#ifndef DYNARR_H_INCLUDED

#endif // DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED


template<class C>

class dynArr

{
private:
    c*data;
    int size;

public:
    dynArr();
    dynArr(int);
    ~dynArr();
    void allocate(int);
    void setValue(int,C);
    C getValue(int);


    };

    #endif // DYNARR_H_INCLUDED
