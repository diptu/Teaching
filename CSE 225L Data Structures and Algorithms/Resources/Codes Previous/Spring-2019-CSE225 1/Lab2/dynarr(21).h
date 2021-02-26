#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED
template <class T>
class dYnArr
{
    private:
         T *data;

         int size;
    public:
        dYnArr();
        dYnArr(int);
        ~dYnArr();
        void setValue(int, T);
        T getValue(int);
        void allocate(int);




};
#endif // DYNARR_H_INCLUDED
