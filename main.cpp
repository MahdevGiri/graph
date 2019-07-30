#include "main.h"

int main() {
    /*cout<<"trying to open the file "<<endl;
    ifstream fin;
    fin.open("graph01.dat");
    int data[100]={};
    if(fin.is_open())
    {
        string line;
        string line1;
     cout<<"file open success"<<endl;
     int size =0;
     while(!fin.eof()) {
         getline(fin, line);
         //fin>>line;
         cout<<"line: "<<line<<endl;

         getline(fin, line1,',');
         cout<<"char: "<<line1<<endl;


     }
    }
    else
    {
        cout<<"file could not be open"<<endl;
    }

    cout<<"second phase"<<endl;
*/

   /* //Graph graph() = new Graph(5);
    Graph graph(6);
    graph.addEdge(0, 1, 9);
    graph.addEdge(0, 4, 1);

    //graph.addEdge(1, 0, 9);
    graph.addEdge(1, 2, 8);
    graph.addEdge(1, 4, 6);

   // graph.addEdge(2, 1, 8);
    graph.addEdge(2, 3, 5);
    graph.addEdge(2, 5, 2);

   // graph.addEdge(3, 2, 5);

   // graph.addEdge(4, 0, 1);
   // graph.addEdge(4, 1, 6);
    graph.addEdge(4, 5, 7);

   // graph.addEdge(5, 2, 2);
   // graph.addEdge(5, 4, 7);
    graph.outputGraph();
    cout<<"size of graph 1 is: "<<graph.getSize()<<endl;


   Graph graph1(9);
   graph1.addEdge(0,1);
    graph1.addEdge(0,2);

    graph1.addEdge(1,3);
    graph1.addEdge(1,7);

    graph1.addEdge(2,3);
    graph1.addEdge(2,4);

    graph1.addEdge(3,1);

    graph1.addEdge(4,6);

    graph1.addEdge(5,6);
    graph1.addEdge(5,8);

    graph1.addEdge(6,2);

    graph1.addEdge(7,6);

    graph1.addEdge(8,2);

    graph1.outputGraph();
    cout<<"size of graph 2 is: "<<graph1.getSize()<<endl;*/



    Graph graph(6);
    vertex* root;
    vertex* pVertex;


    /* create the following graph in memory, position of the * represents the direction of edges
       e.g  Edges are as following in the graph represented in the Adjacency Matrix A->B, A->C, B->D, D->C

                (A)
               /   \
              *     *
             (B)   (C)
              \     *
               *   /
                (D)

    */

    // Add vertices in memory
    root = new vertex("0");			// 0
    graph.add_vertex(root);
    pVertex = new vertex("1");		// 1
    graph.add_vertex(pVertex);
    pVertex = new vertex("2");		// 2
    graph.add_vertex(pVertex);
    pVertex = new vertex("3");		// 3
    graph.add_vertex(pVertex);
    pVertex = new vertex("4");		// 4
    graph.add_vertex(pVertex);
    pVertex = new vertex("5");		// 5
    graph.add_vertex(pVertex);


    graph.add_edge(0, 1, 9);
    graph.add_edge(0, 4, 1);
    graph.add_edge(1, 2, 8);
    graph.add_edge(1, 4, 6);
    graph.add_edge(2, 3, 5);
    graph.add_edge(2, 5, 2);
    graph.add_edge(4, 5, 7);



    // Print Depth first Search Graph Traversal
    graph.clear_marks();
    graph.DFS(root);

    cout << endl;

    // Print BFS Graph Traversal
    graph.clear_marks();
    graph.BFS(root);

    cout<<endl<<endl;
    cout<<"weight is: "<<graph.weight_is(1,0)<<endl;

    cout<<"Index is: "<<graph.index_is(pVertex)<<endl;

    graph.outputWeightedGraph();

    cout<<endl;
    cout<<"Vertex is: "<<graph.getNumVertices()<<endl;
    cout<<"Edges is: "<<graph.getNumEdges()<<endl;



    /////////////////////////////////////////////////////////
    Graph graph1(9);
    vertex* root1;
    vertex* pVertex1;


    root1 = new vertex("a");		// 0
    graph1.add_vertex(root1);
    pVertex1 = new vertex("b");		// 1
    graph1.add_vertex(pVertex1);
    pVertex1 = new vertex("c");		// 2
    graph1.add_vertex(pVertex1);
    pVertex1 = new vertex("d");		// 3
    graph1.add_vertex(pVertex1);
    pVertex1 = new vertex("e");		// 4
    graph1.add_vertex(pVertex1);
    pVertex1 = new vertex("f");		// 5
    graph1.add_vertex(pVertex1);
    pVertex1 = new vertex("g");		// 6
    graph1.add_vertex(pVertex1);
    pVertex1 = new vertex("h");		// 7
    graph1.add_vertex(pVertex1);
    pVertex1 = new vertex("i");		// 8
    graph1.add_vertex(pVertex1);



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


    // Print Depth first Search Graph Traversal
    graph1.clear_marks();
    graph1.DFS(root1);

    cout << endl;

    // Print BFS Graph Traversal
    graph1.clear_marks();
    graph1.BFS(root1);

    cout<<endl<<endl;
    cout<<"weight is: "<<graph1.weight_is(1,0)<<endl;

    cout<<"Index is: "<<graph1.index_is(pVertex1)<<endl;

    graph1.outputDirectedGraph();

    cout<<endl;
    cout<<"Vertex is: "<<graph1.getNumVertices()<<endl;
    cout<<"Edges is: "<<graph1.getNumEdges()<<endl;

    return 0;
}