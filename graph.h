
#ifndef GRAPH_GRAPH_H
#define GRAPH_GRAPH_H

#include <iostream>
#include<string>
#include <set>
using namespace std;

class Graph
{
public:
    Graph(int);
    ~Graph(){};
    bool addEdge(int, int,int); // undirected weighted graph
    bool addEdge(int,int); //directed unweighted graph
    void outputGraph();
    //void removeEdge(int, int);


private:
   static const int MAX=20;
    int vertex;
    int matrix[MAX][MAX];

};

#endif //GRAPH_GRAPH_H
