#include <iostream>
#include<math.h>
using namespace std;


int SumOfDigit(int x) {

   if (x <= 0) {

     return 0;

   }

   return (x % 10) + SumOfDigit(x / 10);
}



int main() {

  int n, result;

  cin>>n;
  cout<<SumOfDigit(n);

  return 0;
}
