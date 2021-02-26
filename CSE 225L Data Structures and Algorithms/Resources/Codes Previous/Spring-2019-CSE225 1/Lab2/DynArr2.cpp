#include "DynArr2.h"

DynArr2::DynArr2() {
    data = NULL;
    row = 0, col = 0;
}
DynArr2::DynArr2(int r, int c) {
    row = r, col = c;
    data = new int*[row];
    for(int i = 0; i < row; i++) {
        data[i] = new int[col];
    }
}
DynArr2::~DynArr2() {
    for(int i = 0; i < row; i++) {
        delete [] data[i];
    }
    delete [] data;
}
int DynArr2::getValue(int r, int c) {
    return data[r][c];
}
void DynArr2::setValue(int r, int c, int value) {
    data[r][c] = value;
}
void DynArr2::allocate(int r, int c) {
    if(data != NULL) {
        for(int i = 0; i < row; i++) {
            delete [] data[i];
        }
        delete [] data;
    }

    data = new int*[r];
    for(int i = 0; i < r; i++) {
        data[i] = new int[c];
    }
}
