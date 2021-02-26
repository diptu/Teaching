#ifndef DYNARR_H_INCLUDE
#define DYNARR_H_INCLUDE

template <class T>
class dynArr
{
private:
    T *data;
    int size;
public:
    dynArr();
    dynArr(int);
    ~dynArr();
    void allocate(int);
    void setValue(int, T);
    T getValue(int);
};
#endif // DYNARR_H_INCLUDE
