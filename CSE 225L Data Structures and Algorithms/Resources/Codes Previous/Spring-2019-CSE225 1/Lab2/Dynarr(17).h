#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED

template<class T>
class Dynarr
{
    private:
    T *data;
    int size;

    public:
        Dynarr();
        Dynarr(T);
        ~Dynarr();
        void allocate(int );
        void setValue(int,T);
        T getValue(int);
};

#endif // DYNARR_H_INCLUDED
