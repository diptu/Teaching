#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED

template <class T>
class  dynArr {

private:

    int *data;
    int size;

    public:

    dynArr();
    dynArr(int s);
    ~dynArr();
    void setValue (int index,T value);
    T getValue(int index);
    void allocate(int s);



};
#endif // DYNARR_H_INCLUDED
