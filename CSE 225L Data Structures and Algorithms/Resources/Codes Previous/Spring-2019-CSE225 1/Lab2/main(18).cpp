#include <iostream>
using namespace std;
#include "DynArr2.h"

int main() {
    cout << "lab02_Task 3" << endl;

    int rowNum, colNum;
    cout << "Enter row no: ";
    cin >> rowNum;
    cout << "Enter column no: ";
    cin >> colNum;

    // declaring ab object of DynArr2 class
    DynArr2 d1(rowNum, colNum);
    int num1;

    cout << "\nInput int number at d1 object" << endl;
    for(int i = 0; i < rowNum; i++) {
        cout << "This row no " << (i+1) << endl;
        for(int j = 0; j < colNum; j++) {
            cout << "Enter int value at " << j << " index: ";
            cin >> num1;
            d1.setValue(i, j, num1);
        }
    }
    cout << "\nPrint all information of d1 object:" << endl;
    for(int i = 0; i < rowNum; i++) {
        //cout << "row no " << (i+1) << endl;
        for(int j = 0; j < colNum; j++) {
            //cout << "Value at " << j << " index: " << d1.getValue(i, j) << endl;
            cout << d1.getValue(i, j) << "  ";
        }
        cout << endl;
    }


    cout << "\nFor using allocate() give new row and col no:" << endl;
    cout << "Enter row no: ";
    cin >> rowNum;
    cout << "Enter column no: ";
    cin >> colNum;

    d1.allocate(rowNum, colNum);
    cout << "\nAfter using allocate() function:" << endl;

    cout << "\nInput int number at d1 object" << endl;
    for(int i = 0; i < rowNum; i++) {
        cout << "This row no " << (i+1) << endl;
        for(int j = 0; j < colNum; j++) {
            cout << "Enter int value at " << j << " index: ";
            cin >> num1;
            d1.setValue(i, j, num1);
        }
    }
    cout << "\nPrint all information of d1 object:" << endl;
    for(int i = 0; i < rowNum; i++) {
        //cout << "row no " << (i+1) << endl;
        for(int j = 0; j < colNum; j++) {
            //cout << "Value at " << j << " index: " << d1.getValue(i, j) << endl;
            cout << d1.getValue(i, j) << "  ";
        }
        cout << endl;
    }


    return 0;
}
