/***********************************************
Name: Mahesh Giri
Assignment: Final project
Purpose: This program will create a graph class/object with the file passed with adjacency matrix for either an
undirected weighted graph or directed weighted graph.It will demonstrate complete testing and full functionality
of the graph.
************************************************/

#ifndef GRAPH_GRAPH_H
#define GRAPH_GRAPH_H

#include <iostream>
#include<fstream>
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
    const int NULL_EDGE = 0;
    vector<vertex *> vertices;
    vector<bool> marks;            // marks[i] is mark for vertices[i]
    int nmbVertices;
    int maxVertices;
    int numEdges;
    vector<vector<int> > edges;

    //private method
    int index_is(vertex *aVertex);
    void mark_vertex(vertex* aVertex);


public:

    Graph(int size);  // constructor
    ~Graph();

    bool add_vertex(vertex *aVertex);

    bool add_edge(int fromVertex, int toVertex, int weight = -1);



    int getNumEdges();

    int getNumVertices();

    void outputWeightedGraph();
    void outputDirectedGraph();


    void BFS(vertex* aVertex);
    void DFS(vertex* aVertex);
    void  clear_marks();

    bool deleteEdge(int fromVertex, int toVertex,int weight=-1);
    bool delete_vertex(vertex *aVertex);
    bool isConnected(vertex* aVertex);



};
#endif //GRAPH_GRAPH_H
