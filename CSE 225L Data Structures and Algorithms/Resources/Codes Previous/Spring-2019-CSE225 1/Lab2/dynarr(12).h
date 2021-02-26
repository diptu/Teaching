#ifndef DYNAAR_H_INCLUDED
#define DYNAAR_H_INCLUDED

template<class T>
class dynArr
{
private:
    T **data;
    int row,col;

public:
    dynArr();
    dynArr(int,int);
    ~dynArr();
    void setValue(int,int,T);
    T getValue(int,int);
    void allocate(int,int );

};
#endif // DYNAAR_H_INCLUDED
