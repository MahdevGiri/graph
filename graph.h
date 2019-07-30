
#ifndef GRAPH_GRAPH_H
#define GRAPH_GRAPH_H


#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

class vertex
{
public:
    string title;

    vertex(string name)
    {
        title = name;
    }
};

class Graph {
private:
    static const int NULL_EDGE = 0;
    vector<vertex *> vertices;
    vector<bool> marks;            // marks[i] is mark for vertices[i]
    int nmbVertices;
    int maxVertices;
    int numEdges;
    vector<vector<int> > edges;

public:
    // constructor
    Graph(int size);

    ~Graph();

    void add_vertex(vertex *aVertex);

    void add_edge(int fromVertex, int toVertex, int weight = -1);

    int index_is(vertex *aVertex);

    int getNumEdges();

    int getNumVertices();

    void outputWeightedGraph();
    void outputDirectedGraph();
};
#endif //GRAPH_GRAPH_H
