#ifndef DYNARR_H_INCLUDES
#define DYNARR_H_INCLUDES
class dynArr
{


int row ;
int column;
};
{


private:
    int *data;
    int size;
public:
    dynArr();
    dynArr(int);
    ~dynArr();
    void setValue(int, int);
    int getValue(int);
};

#endif // DYNARR_H_INCLUDES
