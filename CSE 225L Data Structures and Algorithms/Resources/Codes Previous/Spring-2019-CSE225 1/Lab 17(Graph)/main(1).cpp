#include <iostream>
#include "graphtype.h"

using namespace std;

int main()
{
    GraphType<char>gt(8);

    gt.AddVertex('A');
    gt.AddVertex('B');
    gt.AddVertex('C');
    gt.AddVertex('D');
    gt.AddVertex('E');
    gt.AddVertex('F');
    gt.AddVertex('G');
    gt.AddVertex('H');

    gt.AddEdge('F','H',1);
    gt.AddEdge('H','E',1);
    gt.AddEdge('D','E',1);
    gt.AddEdge('D','G',1);
    gt.AddEdge('D','A',1);
    gt.AddEdge('G','F',1);
    gt.AddEdge('A','D',1);
    gt.AddEdge('A','B',1);
    gt.AddEdge('A','C',1);
    gt.AddEdge('B','A',1);

    int x = gt.OutDegree('D');
    cout << x << endl;

    cout << endl;

    bool flag = gt.FoundEdge('A','D');
    if(flag)
        cout << "There is an edge" << endl;
    else
        cout << "There is no edge" << endl;

    cout << endl;

    flag = gt.FoundEdge('B','D');
    if(flag)
        cout << "There is an edge" << endl;
    else
        cout << "There is no edge" << endl;

    cout << endl;

    gt.DepthFirstSearch('B','E');

    cout << endl;

    gt.DepthFirstSearch('E','B');

    cout << endl;

    gt.BreadthFirstSearch('B','E');

    cout << endl;

    gt.BreadthFirstSearch('E','B');

    cout << endl;


    return 0;
}
