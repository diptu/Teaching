#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED

template <class T>
class  dynArr {

private:

    T *data;
    int size;
    T **matrix;
    T row;
    T column;

    public:

    dynArr();
    dynArr(int s);
    dynArr(int r, int column);

    ~dynArr();
    void setValue (int index,T value);
    void setValue(int row, int c, T value);
    T getValue(int row, int column);
    T getValue(int index);
    void allocate(int s);
     void allocate(int row,int column);




};
#endif // DYNARR_H_INCLUDED
