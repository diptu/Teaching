#ifndef DYNAAR_H_INCLUDED
#define DYNAAR_H_INCLUDED

class dynArr
{
private:
    int *data;
    int size;

public:
    dynArr();
    dynArr(int);
    ~dynArr();
    void setValue(int,int);
    int getValue(int);
    void allocate(int );

};
#endif // DYNAAR_H_INCLUDED
