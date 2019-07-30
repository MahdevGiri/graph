
#include "graph.h"

Graph::Graph(int size) {
    nmbVertices = 0;
    numEdges =0;
    maxVertices = size;

    vertices.resize(size);
    for (int i = 0; i < size; i++)    // init vertices
        vertices[i] = NULL;

    marks.resize(size);

    int rows = size;
    int columns = size;
    edges.resize(rows, vector<int>(columns, 0));

}




void Graph::add_vertex(vertex *aVertex) {
    vertices[nmbVertices] = aVertex;
    for (int i=0; i<maxVertices; i++)
    {
        edges[nmbVertices][i] = NULL_EDGE;
        edges[i][nmbVertices] = NULL_EDGE;
    }
    nmbVertices++;

}

\




