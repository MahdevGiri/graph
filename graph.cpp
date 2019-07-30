
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

void Graph::add_edge(int fromVertex, int toVertex, int weight) {
    int row;
    int column;

    row = index_is(vertices[fromVertex]);
    column = index_is(vertices[toVertex]);
    if(weight==-1)
    {
        edges[row][column] = 1; // directed unweighted graph
    }

    else
    {
        // for the undirected  weighted graph
        edges[row][column] = weight;
        edges[column][row] =weight;
    }


    numEdges++;

}

int Graph::index_is(vertex *aVertex) {
    int i = 0;
    while (i < nmbVertices)
    {
        if (vertices[i] == aVertex)
            return i;
        i++;
    }
    return -1;
}

int Graph::getNumEdges()
{
    return numEdges;

}

int Graph::getNumVertices() {
    return nmbVertices;
}



void Graph::outputWeightedGraph() {
    cout<<"Graph: (Adjacency Matrix)"<<endl;
    for (int i = 0; i < maxVertices; i++) {
        for (int j = 0; j < maxVertices; j++) {
            if (i == j || edges[i][j] != 0) {
                cout << edges[i][j] << " ";
            } else {
                cout << "x" << " ";
            }

        }
        cout << endl;
    }

}

