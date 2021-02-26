#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED

class Dynarr
{
    private:
    int *data;
    int size;

    public:
        Dynarr();
        Dynarr(int);
        ~Dynarr();
        void allocate(int);
        void setValue(int, int);
        int getValue(int);
};

#endif // DYNARR_H_INCLUDED
