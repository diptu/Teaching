#ifndef DYNARR2_H_INCLUDED
#define DYNARR2_H_INCLUDED
#include <iostream>
using namespace std;

class DynArr2 {
  private:
    int **data;
    int row, col;

  public:
    DynArr2();
    DynArr2(int, int);
    ~DynArr2();
    void setValue(int row, int col, int value);
    int getValue(int row, int col);
    void allocate(int row, int col);


};

#endif // DYNARR2_H_INCLUDED
