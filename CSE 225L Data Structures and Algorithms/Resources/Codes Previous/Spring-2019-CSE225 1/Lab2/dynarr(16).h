#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED
#include <iostream>
using namespace std;

template <class ItemType>
class DynArr {
  private:
    ItemType *data;
    int size;

  public:
    DynArr();
    DynArr(int);
    ~DynArr();
    void setVaule(int, ItemType);
    ItemType getValue(int);
    void allocate(int);
};
#endif // DYNARR_H_INCLUDED
