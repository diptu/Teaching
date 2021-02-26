#include <iostream>
#include "graphtype.cpp"
using namespace std;

int main()
{

    graphtype<char> ob;
    ob.AddVertex('D');
    ob.AddVertex('H');
    ob.AddVertex('E');
    ob.AddVertex('D');
    ob.AddVertex('G');
    ob.AddVertex('A');
    ob.AddVertex('B');
    ob.AddVertex('C');
    ob.AddEdge('G','F',1);
     ob.AddEdge('F','H',1);
      ob.AddEdge('H','E',1);
       ob.AddEdge('E','D',1);
        ob.AddEdge('D','G',1);
         ob.AddEdge('D','A',1);
         ob.AddEdge('A','D',1);
     ob.AddEdge('A','B',1);
      ob.AddEdge('A','C',1);
       ob.AddEdge('B','A',1);

    cout << "Hello world!" << endl;
    return 0;
}
