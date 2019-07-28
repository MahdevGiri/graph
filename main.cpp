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

    //Graph graph() = new Graph(5);
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


    cout<<endl<<endl;
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


    return 0;
}