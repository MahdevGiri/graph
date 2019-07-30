/***********************************************
Name: Mahesh Giri
Assignment: Final project
Purpose: This program will create a graph class/object with the file passed with adjacency matrix for either an
undirected weighted graph or directed weighted graph.It will demonstrate complete testing and full functionality
of the graph.
************************************************/

#include "main.h"

int main() {

    cout<<"*********************TESTING****************************"<<endl;
    cout<<"*********************GRAPH01.DAT************************"<<endl;
    int size =6;  //size = number of lines in file
    Graph graph(size);
    vertex* vertices[size];

    // Add vertices in memory
    cout<<"Adding the vertices "<<endl;

    vertices[0] = new vertex("0");	//0
    graph.add_vertex(vertices[0]);
    vertices[1] = new vertex("1");	//1
    graph.add_vertex(vertices[1]);
    vertices[2] = new vertex("2");	//2
    graph.add_vertex(vertices[2]);
    vertices[3] = new vertex("3");	//3
    graph.add_vertex(vertices[3]);
    vertices[4] = new vertex("4");	//4
    graph.add_vertex(vertices[4]);
    vertices[5] = new vertex("5");	//5
    graph.add_vertex(vertices[5]);


    cout<<size<<" vetices added "<<endl<<endl;

    cout<<"Adding edges "<<endl;
    graph.add_edge(0, 1, 9);
    graph.add_edge(0, 4, 1);
    graph.add_edge(1, 2, 8);
    graph.add_edge(1, 4, 6);
    graph.add_edge(2, 3, 5);
    graph.add_edge(2, 5, 2);
    graph.add_edge(4, 5, 7);
    cout<<"7 edges added "<<endl<<endl;

    graph.outputWeightedGraph();
    cout<<endl;

    cout<<"Breadth first traversal staring from the first vertex"<<endl;
    graph.clear_marks();
    graph.BFS(vertices[0]);
    cout<<"Breadth first traversal done"<<endl<<endl;

    cout<<"Breadth first traversal staring from the third vertex"<<endl;
    graph.clear_marks();
    graph.BFS(vertices[2]);
    cout<<"Breadth first traversal done"<<endl<<endl;


    cout<<"Depth first traversal staring from the first vertex"<<endl;
    graph.clear_marks();
    graph.DFS(vertices[0]);
    cout<<"Depthth first traversal done"<<endl<<endl;

    cout<<"Depth first traversal staring from the fourth vertex"<<endl;
    graph.clear_marks();
    graph.DFS(vertices[3]);
    cout<<"Depth first traversal done"<<endl<<endl;

    cout<<"Number of vertex is: "<<graph.getNumVertices()<<endl;
    cout<<"Number of edge is: "<<graph.getNumEdges()<<endl<<endl;

  cout<<"Delete the edge from 2 to 3 with weight 5"<<endl;
    bool test = graph.deleteEdge(2,3,5);
    if(test)
    {
        cout<<"Deleted"<<endl;
    }
    else
    {
        cout<<" Not Deleted"<<endl;
    }
    cout<<endl;

    cout<<"Number of vertex is: "<<graph.getNumVertices()<<endl;
    cout<<"Number of edge is: "<<graph.getNumEdges()<<endl<<endl;

    cout<<"Check if the vertex(3) is connected after deletion"<<endl;
    bool check=graph.isConnected(vertices[3]);
   if (check)
    {
       cout<<"Connected"<<endl;
    }
   else
   {
      cout<<"Not connected"<<endl;
   }
   cout<<endl;

    cout<<"Breadth first traversal staring from the first vertex after deletion of edge"<<endl;
    graph.clear_marks();
    graph.BFS(vertices[0]);
    cout<<"Breadth first traversal done"<<endl<<endl;

    cout<<"Depth first traversal staring from the first vertex after deletion of the edge"<<endl;
    graph.clear_marks();
    graph.DFS(vertices[0]);
    cout<<"Depthth first traversal done"<<endl<<endl;

    cout<<"Delete the vertex  5 "<<endl;
     test = graph.delete_vertex(vertices[5]);
    if(test)
    {
        cout<<"Deleted"<<endl;
    }
    else
    {
        cout<<" Not Deleted"<<endl;
    }
    cout<<endl;

    cout<<"Number of vertex is: "<<graph.getNumVertices()<<endl;
    cout<<"Number of edge is: "<<graph.getNumEdges()<<endl<<endl;

    cout<<"Breadth first traversal staring from the first vertex after deletion of vertex(2)"<<endl;
    graph.clear_marks();
    graph.BFS(vertices[0]);
    cout<<"Breadth first traversal done"<<endl<<endl;

    cout<<"Depth first traversal staring from the first vertex after deletion of vertex(2)"<<endl;
    graph.clear_marks();
    graph.DFS(vertices[0]);
    cout<<"Depthth first traversal done"<<endl<<endl;

   cout << endl;



   cout<<endl<<endl;

    cout<<"*********************TESTING****************************"<<endl;
    cout<<"*********************GRAPH02.DAT************************"<<endl;
     int size1 =9;  //size = number of lines in file
    Graph graph1(size1);
    vertex* vertices1[size1];

    // Add vertices in memory
    cout<<"Adding the vertices "<<endl;

    vertices1[0] = new vertex("a");	//0
    graph1.add_vertex(vertices1[0]);
    vertices1[1] = new vertex("b");	//1
    graph1.add_vertex(vertices1[1]);
    vertices1[2] = new vertex("c");	//2
    graph1.add_vertex(vertices1[2]);
    vertices1[3] = new vertex("d");	//3
    graph1.add_vertex(vertices1[3]);
    vertices1[4] = new vertex("e");	//4
    graph1.add_vertex(vertices1[4]);
    vertices1[5] = new vertex("f");	//5
    graph1.add_vertex(vertices1[5]);
    vertices1[6] = new vertex("g");	//6
    graph1.add_vertex(vertices1[6]);
    vertices1[7] = new vertex("h");	//7
    graph1.add_vertex(vertices1[7]);
    vertices1[8] = new vertex("i");	//8
    graph1.add_vertex(vertices1[8]);



    cout<<size1<<" vetices added "<<endl<<endl;

    cout<<"Adding edges "<<endl;
    graph1.add_edge(0,1);
    graph1.add_edge(0,2);

    graph1.add_edge(1,3);
    graph1.add_edge(1,7);

    graph1.add_edge(2,3);
    graph1.add_edge(2,4);

    graph1.add_edge(3,1);

    graph1.add_edge(4,6);

    graph1.add_edge(5,6);
    graph1.add_edge(5,8);

    graph1.add_edge(6,2);

    graph1.add_edge(7,6);

    graph1.add_edge(8,2);
    cout<<"13 edges added "<<endl<<endl;

    graph1.outputDirectedGraph();
    cout<<endl;

    cout<<"Breadth first traversal staring from the first vertex"<<endl;
    graph1.clear_marks();
    graph1.BFS(vertices1[0]);
    cout<<"Breadth first traversal done"<<endl<<endl;

    cout<<"Breadth first traversal staring from the third vertex"<<endl;
    graph1.clear_marks();
    graph1.BFS(vertices1[2]);
    cout<<"Breadth first traversal done"<<endl<<endl;


    cout<<"Depth first traversal staring from the first vertex"<<endl;
    graph1.clear_marks();
    graph1.DFS(vertices1[0]);
    cout<<"Depthth first traversal done"<<endl<<endl;

    cout<<"Depth first traversal staring from the fourth vertex"<<endl;
    graph1.clear_marks();
    graph1.DFS(vertices1[3]);
    cout<<"Depth first traversal done"<<endl<<endl;

    cout<<"Number of vertex is: "<<graph1.getNumVertices()<<endl;
    cout<<"Number of edge is: "<<graph1.getNumEdges()<<endl<<endl;

    cout<<"Delete the edge from e to g "<<endl;
    test = graph1.deleteEdge(4,6);
    if(test)
    {
        cout<<"Deleted"<<endl;
    }
    else
    {
        cout<<" Not Deleted"<<endl;
    }
    cout<<endl;
    cout<<"Number of vertex is: "<<graph1.getNumVertices()<<endl;
    cout<<"Number of edge is: "<<graph1.getNumEdges()<<endl<<endl;


    cout<<"Delete the edge from c to e "<<endl;
    test = graph1.deleteEdge(2,4);
    if(test)
    {
        cout<<"Deleted"<<endl;
    }
    else
    {
        cout<<" Not Deleted"<<endl;
    }
    cout<<endl;

    cout<<"Number of vertex is: "<<graph1.getNumVertices()<<endl;
    cout<<"Number of edge is: "<<graph1.getNumEdges()<<endl<<endl;

    cout<<"Check if the vertex(e) is connected after deletion"<<endl;
    check=graph1.isConnected(vertices1[4]);
    if (check)
    {
        cout<<"Connected"<<endl;
    }
    else
    {
        cout<<"Not connected"<<endl;
    }
    cout<<endl;


    cout<<"Breadth first traversal staring from the first vertex after deletion of edge"<<endl;
    graph1.clear_marks();
    graph1.BFS(vertices1[0]);
    cout<<"Breadth first traversal done"<<endl<<endl;

    cout<<"Depth first traversal staring from the first vertex after deletion of the edge"<<endl;
    graph1.clear_marks();
    graph1.DFS(vertices1[0]);
    cout<<"Depthth first traversal done"<<endl<<endl;

    cout<<"Delete the vertex  (g) "<<endl;
    test = graph1.delete_vertex(vertices1[6]);
    if(test)
    {
        cout<<"Deleted"<<endl;
    }
    else
    {
        cout<<" Not Deleted"<<endl;
    }
    cout<<endl;

    cout<<"Number of vertex is: "<<graph1.getNumVertices()<<endl;
    cout<<"Number of edge is: "<<graph1.getNumEdges()<<endl<<endl;

    cout<<"Breadth first traversal staring from the first vertex after deletion of vertex(g)"<<endl;
    graph1.clear_marks();
    graph1.BFS(vertices1[0]);
    cout<<"Breadth first traversal done"<<endl<<endl;

    cout<<"Depth first traversal staring from the first vertex after deletion of vertex(g)"<<endl;
    graph1.clear_marks();
    graph1.DFS(vertices1[0]);
    cout<<"Depthth first traversal done"<<endl<<endl;

    cout << endl;



    cout<<endl<<endl;

    cout<<"*********************TESTING****************************"<<endl;
    cout<<"*********************GRAPH03.DAT************************"<<endl;
    int size2 =9;  //size = number of lines in file
    Graph graph2(size2);
    vertex* vertices2[size2];

    // Add vertices in memory
    cout<<"Adding the vertices "<<endl;

    vertices2[0] = new vertex("a");	//0
    graph2.add_vertex(vertices2[0]);
    vertices2[1] = new vertex("b");	//1
    graph2.add_vertex(vertices2[1]);
    vertices2[2] = new vertex("c");	//2
    graph2.add_vertex(vertices2[2]);
    vertices2[3] = new vertex("d");	//3
    graph2.add_vertex(vertices2[3]);
    vertices2[4] = new vertex("e");	//4
    graph2.add_vertex(vertices2[4]);
    vertices2[5] = new vertex("f");	//5
    graph2.add_vertex(vertices2[5]);
    vertices2[6] = new vertex("g");	//6
    graph2.add_vertex(vertices2[6]);
    vertices2[7] = new vertex("h");	//7
    graph2.add_vertex(vertices2[7]);
    vertices2[8] = new vertex("i");	//8
    graph2.add_vertex(vertices2[8]);



    cout<<size1<<" vetices added "<<endl<<endl;

    cout<<"Adding edges "<<endl;
    graph2.add_edge(0,1,2);
    graph2.add_edge(0,2,4);
    graph2.add_edge(0,3,6);
    graph2.add_edge(1,2,5);
    graph2.add_edge(2,3,1);
    graph2.add_edge(2,4,2);
    graph2.add_edge(3,5,3);
    graph2.add_edge(3,7,4);
    graph2.add_edge(4,5,1);
    graph2.add_edge(4,6,5);
    graph2.add_edge(4,8,3);
    graph2.add_edge(5,6,4);
    cout<<"13 edges added "<<endl<<endl;

    graph2.outputWeightedGraph();
    cout<<endl;

    cout<<"Breadth first traversal staring from the first vertex"<<endl;
    graph2.clear_marks();
    graph2.BFS(vertices2[0]);
    cout<<"Breadth first traversal done"<<endl<<endl;

    cout<<"Breadth first traversal staring from the third vertex"<<endl;
    graph2.clear_marks();
    graph2.BFS(vertices2[2]);
    cout<<"Breadth first traversal done"<<endl<<endl;


    cout<<"Depth first traversal staring from the first vertex"<<endl;
    graph2.clear_marks();
    graph2.DFS(vertices2[0]);
    cout<<"Depthth first traversal done"<<endl<<endl;

    cout<<"Depth first traversal staring from the fourth vertex"<<endl;
    graph2.clear_marks();
    graph2.DFS(vertices2[3]);
    cout<<"Depth first traversal done"<<endl<<endl;

    cout<<"Number of vertex is: "<<graph2.getNumVertices()<<endl;
    cout<<"Number of edge is: "<<graph2.getNumEdges()<<endl<<endl;

    cout<<"Delete the edge from d to h "<<endl;
    test = graph2.deleteEdge(3,7,4);
    if(test)
    {
        cout<<"Deleted"<<endl;
    }
    else
    {
        cout<<" Not Deleted"<<endl;
    }
    cout<<endl;
    cout<<"Number of vertex is: "<<graph2.getNumVertices()<<endl;
    cout<<"Number of edge is: "<<graph2.getNumEdges()<<endl<<endl;




    cout<<"Check if the vertex(h) is connected after deletion"<<endl;
    check=graph2.isConnected(vertices2[7]);
    if (check)
    {
        cout<<"Connected"<<endl;
    }
    else
    {
        cout<<"Not connected"<<endl;
    }
    cout<<endl;


    cout<<"Breadth first traversal staring from the first vertex after deletion of edge"<<endl;
    graph2.clear_marks();
    graph2.BFS(vertices2[0]);
    cout<<"Breadth first traversal done"<<endl<<endl;

    cout<<"Depth first traversal staring from the first vertex after deletion of the edge"<<endl;
    graph2.clear_marks();
    graph2.DFS(vertices2[0]);
    cout<<"Depthth first traversal done"<<endl<<endl;

    cout<<"Delete the vertex  (i) "<<endl;
    test = graph2.delete_vertex(vertices2[8]);
    if(test)
    {
        cout<<"Deleted"<<endl;
    }
    else
    {
        cout<<" Not Deleted"<<endl;
    }
    cout<<endl;

    cout<<"Number of vertex is: "<<graph2.getNumVertices()<<endl;
    cout<<"Number of edge is: "<<graph2.getNumEdges()<<endl<<endl;

    cout<<"Breadth first traversal staring from the first vertex after deletion of vertex(i)"<<endl;
    graph2.clear_marks();
    graph2.BFS(vertices2[0]);
    cout<<"Breadth first traversal done"<<endl<<endl;

    cout<<"Depth first traversal staring from the first vertex after deletion of vertex(i)"<<endl;
    graph2.clear_marks();
    graph2.DFS(vertices2[0]);
    cout<<"Depthth first traversal done"<<endl<<endl;

    cout << endl;



    return 0;
}