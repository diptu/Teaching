#include <iostream>

#include "graphType.cpp"


using namespace std;

int main()
{
    GraphType<char> grp;
    grp.AddVertex('F');
    grp.AddVertex('H');
    grp.AddEdge('F','H',1);
    grp.AddVertex('E');
    grp.AddEdge('H','E',1);
    grp.AddVertex('D');
    grp.AddEdge('D','E',1);
    grp.AddVertex('G');
    grp.AddEdge('D','G',1);
    grp.AddEdge('G','F',1);
    grp.AddVertex('A');
    grp.AddEdge('D','A',1);
    grp.AddEdge('A','D',1);
    grp.AddVertex('B');
    grp.AddEdge('A','B',1);
    grp.AddEdge('B','A',1);
    grp.AddVertex('C');
    grp.AddEdge('A','C',1);
   // grp.AddEdge('F','H',1);
   // grp.AddEdge('H','E',1);
   // grp.AddEdge('D','E',1);
   // grp.AddEdge('D','G',1);
   // grp.AddEdge('G','F',1);
   // grp.AddEdge('D','A',1);
   // grp.AddEdge('A','D',1);
  //  grp.AddEdge('A','B',1);
   // grp.AddEdge('B','A',1);
   // grp.AddEdge('A','C',1);


    cout << "Hello world!" << endl;
    return 0;
}
