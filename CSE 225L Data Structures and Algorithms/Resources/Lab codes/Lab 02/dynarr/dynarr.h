#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED

/*
class dynArr
{
private:
    int *data;
    int size;

public:
    dynArr();
    dynArr(int);
    void allocate(s);
    ~dynArr();
    void setValue(int,int);
    int getValue(int);
};
*/

class dynArr
{
private:
    int **data;
    int row, col;

public:
    dynArr();
    dynArr(int,int);
    void allocate(int,int);
    ~dynArr();
    void setValue(int,int,int);
    int getValue(int,int);
};

#endif // DYNARR_H_INCLUDED
