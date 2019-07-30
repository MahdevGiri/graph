
#ifndef GRAPH_GRAPH_H
#define GRAPH_GRAPH_H


#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

struct vertex
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

    bool add_vertex(vertex *aVertex);

    bool add_edge(int fromVertex, int toVertex, int weight = -1);

    int index_is(vertex *aVertex);

    int getNumEdges();

    int getNumVertices();

    void outputWeightedGraph();
    void outputDirectedGraph();
    void mark_vertex(vertex* aVertex);

    //vertex* get_unmarked();
    void BFS(vertex* aVertex);
    void DFS(vertex* aVertex);
    void  clear_marks();

    bool deleteEdge(int fromVertex, int toVertex,int weight=-1);
    bool delete_vertex(vertex *aVertex);



};
#endif //GRAPH_GRAPH_H
