

#include "graph.h"


    Graph::Graph(int val) {

    vertex=val;

        int i,j;
        for(i = 0; i < vertex; i++)
            for(j = 0; j < vertex; j++)
                matrix[i][j] = 0;
}

bool Graph::addEdge(int source, int destination,int weight) {
    //add edge
    matrix[source][destination]=weight;

    //add bak edge for undirected graph
    matrix[destination][source] = weight;
    return true;

}

void Graph::outputGraph() {
    cout<<"Graph: (Adjacency Matrix)"<<endl;
    for (int i = 0; i < vertex; i++) {
        for (int j = 0; j <vertex ; j++) {
            if(i==j || matrix[i][j]!=0)
            {
                cout<<matrix[i][j]<< " ";
            }
            else
            {
                cout<<"x"<<" ";
            }

        }
        cout<<endl;
    }
    for (int i = 0; i < vertex; i++) {
        cout<<"Vertex " << i << " is connected to:";
        for (int j = 0; j <vertex ; j++) {
            if(matrix[i][j]!=0){
                cout<<j << " ";
            }
        }
        cout<<endl;
    }

}



bool Graph::addEdge(int source, int destination) {
    //add edge
    matrix[source][destination]=1;
    return true;
}




