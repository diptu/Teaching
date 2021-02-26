#include "dynarr.cpp"
#include <iostream>
using namespace std;


int main (){

dynArr <int> c;
dynArr <int> d(5);
int temp;
for (int i=0;i<5;i++){
    cin>>temp;
    d.setValue(i,temp);
}


for (int i=0;i<5;i++){

   cout<<d.getValue(i);
}


dynArr <int> s(2,3);





}
