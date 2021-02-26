#include <string>
#include <sstream>
#include <iostream>

using namespace std;


class Complex {
    float real_, imaginary_;
  public:
    Complex (float, float);
    Complex operator= (const Complex& rhs);
    Complex operator+ (const Complex& rhs) const;
    Complex operator- (const Complex& rhs) const;
    Complex operator* (const Complex& rhs) const;
    string toString() const;
    };
