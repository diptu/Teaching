#ifndef DYNARR_H
#define DYNARR_H

template<class T>
class dynarr
{
    public:
        dynarr();
        dynarr(T);
        void setValue(T,T);
        int getValue(T);
        void allocate(T);


        ~dynarr();

    protected:

    private:
        int *data;
        int size;
};

#endif // DYNARR_H
