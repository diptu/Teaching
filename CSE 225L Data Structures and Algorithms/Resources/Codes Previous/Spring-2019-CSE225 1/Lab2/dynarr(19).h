#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED

template <class C>

class dynArr
{
private:
    C *data;
    int size;
public:
    dynArr();
    dynArr(int);
    ~dynArr();
    void allocate(int);
    void setValue(int,C);
    C getValue(int);
};
#endif // DYNAR_H_INCLUDED
