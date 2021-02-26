#ifndef DYNARR_H_INCLUDE
#define DYNARR_H_INCLUDE
class dynArr
{
private:
    int *data;
    int size;

public:
    dynArr();
    dynArr(int);
    ~dynArr();
    void setValue(int , int);
    int getValue(int);
    void allocate(int);

};

#endif // DYNARR_H_INCLUDE
