#include "Complex.h"

int main()
{
    cout << "Lab03_Complex" << endl;

    Complex c1(2, 3);
    Complex c2(3, 5);
    Complex c3;

    cout << "Printing 2 complex numbers" << endl;
    cout << "1st complex number is: ";
    c1.print();
    cout << "2nd complex number is: ";
    c2.print();

    cout << "\nAddition" << endl;
    c3 = c1+c2;
    c3.print();

    cout << "\nSubtraction" << endl;
    c3 = operator-(c1, c2);
    c3.print();

    c3 = operator-(c1, 5);
    c3.print();

    c3 = operator-(5, c1);
    c3.print();

    cout << "\nMultiplication" << endl;
    c3 = operator*(c1, c2);
    c3.print();

    c3 = operator*(c1, 3);
    c3.print();

    c3 = operator*(3, c1);
    c3.print();


    cout << "\nDivision" << endl;
    c3 = operator/(c1, c2);
    c3.print();

    return 0;
}
