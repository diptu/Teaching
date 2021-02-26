#ifndef DYNARR_H
#define DYNARR_H

template<class T>
class dynarr
{
    public:
        dynarr();
        dynarr(T);
        void setValue(T,T);
        T getValue(T);
        void allocate(T);


        ~dynarr();

    protected:

    private:
       T *data;
        T size;
};

#endif // DYNARR_H
