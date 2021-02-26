#ifndef GRAPHTYPE_H_INCLUDED
#define GRAPHTYPE_H_INCLUDED
#include "stacktype.h"
#include "quetype.h"

template<class VertexType>
class GraphType {
public:
    GraphType();
    GraphType(int maxV);
    ~GraphType();
    void MakeEmpty();
    bool IsFull();
    bool IsEmpty();
    void AddVertex(VertexType);
    void AddEdge(VertexType, VertexType, int);
    int WeightIs(VertexType, VertexType);
    void GetToVertices(VertexType, QueType<VertexType>&);
    void ClearMarks();
    void MarkVertex(VertexType);
    bool IsMarked();
    void DepthFirstSearch(VertexType, VertexType);
    int numVertices;
    int maxVertices;
    VertexType* vertices;
    int** edges;
    bool* marks;
};


#endif // GRAPHTYPE_H_INCLUDED
