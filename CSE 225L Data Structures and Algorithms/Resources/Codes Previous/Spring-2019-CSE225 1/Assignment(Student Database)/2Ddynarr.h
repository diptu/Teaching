#ifndef DYNARR_H_INCLUDE
#define DYNARR_H_INCLUDE

class dynArr
{
private:
    int **data;
    int row, column;
public:
    dynArr();
    dynArr(int, int);
    ~dynArr();
    void allocate(int, int);
    void setValue(int, int, int);
    int getValue(int, int);
};
