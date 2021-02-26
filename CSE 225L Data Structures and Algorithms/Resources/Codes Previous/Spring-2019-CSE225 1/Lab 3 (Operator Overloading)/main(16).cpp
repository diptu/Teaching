#include <iostream>
#include <string>
#include "complex.h"
using namespace std;

int main()
{Complex a(5, 6);
  Complex b(1, 4);

  Complex sum = a + b;
  Complex dif = a - b;
  Complex pro = a * b;

  cout << "sum: " << sum.toString() << "\n";
  cout << "difference: " << dif.toString() << "\n";
  cout << "product: " << pro.toString() << "\n";

  return 0;
}
