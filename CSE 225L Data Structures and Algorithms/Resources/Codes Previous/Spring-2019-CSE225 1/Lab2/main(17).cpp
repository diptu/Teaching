//#include <iostream>
//using namespace std;
#include "dynarr.h"
#include "dynarr.cpp"

int main() {
    cout << "lab02_Task 4" << endl;

    DynArr<int> d1(3);
    DynArr<double> d2(3);
    DynArr<char> d3(3);

    cout << "\n\nint type for template\n";
    int num1;
    cout << "\nEnter 3 int value:\n";
    for(int i = 0; i < 3; i++) {
        cout << "Enter int value at " << i << " index: ";
        cin >> num1;
        d1.setVaule(i, num1);
    }
    cout << "\nPrint information of int type object:\n";
    for(int i = 0; i < 3; i++) {
        cout << "Value at " << i << " index: " << d1.getValue(i) << endl;
    }


    cout << "After using allocate() function in d1 object:" << endl;
    d1.allocate(5);
    // taking 5 input from the user
    cout << "\nTake 5 input from the user: "<< endl;
    for(int i = 0; i < 5; i++) {
        cout << "Enter an integer for " << i << " index: ";
        cin >> num1;
        d1.setVaule(i, num1);
    }
    // printing all information
    cout << "\nInformation of 2nd DynArr object:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << "Value at " << i << " index: " << d1.getValue(i) << endl;
    }


    cout << "\n\ndouble type for template\n";
    double num2;
    cout << "\nEnter 3 double value:\n";
    for(int i = 0; i < 3; i++) {
        cout << "Enter double value at " << i << " index: ";
        cin >> num2;
        d2.setVaule(i, num2);
    }
    cout << "\nPrint information of double type object:\n";
    for(int i = 0; i < 3; i++) {
        cout << "Value at " << i << " index: " << d2.getValue(i) << endl;
    }


    cout << "\n\nchar type for template\n";
    char ch;
    cout << "\nEnter 3 char value:\n";
    for(int i = 0; i < 3; i++) {
        cout << "Enter char value at " << i << " index: ";
        cin >> ch;
        d3.setVaule(i, ch);
    }
    cout << "\nPrint information of char type object:\n";
    for(int i = 0; i < 3; i++) {
        cout << "Value at " << i << " index: " << d3.getValue(i) << endl;
    }

    return 0;
}
