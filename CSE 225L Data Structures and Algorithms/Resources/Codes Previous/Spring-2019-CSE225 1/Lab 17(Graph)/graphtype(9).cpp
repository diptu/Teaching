#include "graphtype.h"

#include "stacktype.cpp"
#include"quetype.cpp"
#include <iostream>

using namespace std;
const int NULL_EDGE=0;
template<class VertexType>
graphtype<VertexType>::graphtype()
{
    numVertices=0;
    maxVertices=50;
    vertices=new VertexType[50];
    edges=new int*[50];
    for(int i=0;i<50;i++)
        edges[i]=new int[50];
    marks=new bool[50];
}
template<class VertexType>
graphtype<VertexType>::graphtype(int maxV)
{
    numVertices=0;
    maxVertices=maxV;
    vertices=new VertexType[maxV];
    edges=new int*[maxV];
    for(int i=0;i<maxV;i++)
        edges[i]=new int[maxV];
    marks=new bool[maxV];
}

template<class VertexType>
graphtype<VertexType>::~graphtype()
{
    delete[ ] vertices;
    delete[] marks;
    for(int i=0;i<maxVertices;i++)
    delete[] edges[i];
    delete[] edges;
}
template<class VertexType>
void graphtype<VertexType>::MakeEmpty()
{
    numVertices=0;
}

template<class VertexType>
bool graphtype<VertexType>::IsEmpty()
{
    return (numVertices==0);
}

template<class VertexType>
bool graphtype<VertexType>::IsFull()
{
    return (numVertices==maxVertices);
}
template<class VertexType>
void graphtype<VertexType>::AddVertex(VertexType vertex)
{vertices[numVertices]=vertex;
for(int index=0;index<numVertices;index++)
{
    edges[numVertices][index]=NULL_EDGE;
    edges[index][numVertices]=NULL_EDGE;

}
numVertices++;

}
template<class VertexType>
int IndexIs(VertexType* vertices,VertexType vertex)

{
 int index=0;
 while(!(vertex==vertices[index]))
    index++;
 return index;
}

template<class VertexType>
void graphtype<VertexType>::ClearMarks()
{
    for(int i=0;i<maxVertices;i++)
        marks[i]=false;

}
template<class VertexType>
void graphtype<VertexType>::MarkVertex(VertexType vertex)
{
    int index=IndexIs(vertices,vertex);
    marks[index]=true;
}
template<class VertexType>
bool graphtype<VertexType>::IsMarked(VertexType vertex)
{
    int index=IndexIs(vertices,vertex);
    return marks[index];
}

template<class VertexType>
void graphtype<VertexType>:: AddEdge(VertexType fromVertex, VertexType toVertex, int weight)
{
    int row = IndexIs(vertices,fromVertex);
    int col = IndexIs(vertices,toVertex);
    edges[row][col] = weight;
}

template<class VertexType>
int graphtype<VertexType>:: WeightIs(VertexType fromVertex, VertexType toVertex)
{
     int row = IndexIs(vertices,fromVertex);
    int col = IndexIs(vertices,toVertex);
    return edges[row][col];
}

template<class VertexType>
void graphtype<VertexType>:: GetToVertices(VertexType vertex, QueType<VertexType>& adjVertices)
{
    int fromIndex , toIndex;
    fromIndex = IndexIs(vertices,vertex);
    for(toIndex = 0; toIndex<numVertices; toIndex++)
        if(edges[fromIndex][toIndex] != NULL_EDGE)
        adjVertices.Enqueue(vertices[toIndex]);
}

template<class VertexType>
void graphtype<VertexType>::DepthFirsthSearch(VertexType startVertex, VertexType endVertex)
{
    StackType<VertexType> stack;
    QueType<VertexType> vertexQ;
    bool found = false;
    VertexType vertex, item;

    ClearMarks();
    stack.Push(startVertex);
    do
    {
        vertex  = stack.Top();
        stack.Pop();
        if(vertex == endVertex)
        {
            cout<< vertex << " " ;
            found = true ;
        }
        else
        {
            if(!IsMarked(vertex))
            {
                MarkVertex((vertex));
                cout<<vertex << " ";
                GetToVertices(!vertex,vertexQ);
                while(!vertexQ.IsEmpty())
                {
                    vertexQ.Dequeue(item);
                    if(!IsMarked(item))
                        stack.Push(item);
                }
            }
        }
    }
    while (!stack.IsEmpty() && !found);
        cout<< endl;
    if(!found)
        cout<< "path not found" << endl;
}

template<class VertexType>
void graphtype<VertexType>::BreadthFirsthSearch(VertexType startVertex, VertexType endVertex)
{
    QueType<VertexType> queue;
    QueType<VertexType> vertexQ;

    bool found = false;
    VertexType vertex , item;

    ClearMarks();
    queue.Enqueue(startVertex);
    do
    {
        queue.Dequeue(vertex);
        if(vertex == endVertex)
        {
            cout << vertex << " " << endl;
            found = true;
        }
        else
        {
            if( !IsMarked(vertex))
            {
                MarkVertex(vertex);
                cout << vertex << " " << endl;
                GetToVertices(vertex,vertexQ);

                while ( ! vertex.IsEmpty())
                {
                    vertex.Dequeue(item);
                    if( !IsMarked(item))
                        queue.Enqueue(item);
                }
            }
        }
    }
    while ( !queue.IsEmpty() && !found);
    cout << endl;
    if( !found)
        cout<< "path not found" << endl;
}

