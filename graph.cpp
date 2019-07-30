
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

Graph::~Graph() {
    for (int i = 0; i < nmbVertices; i++) {
        delete vertices[i];
    }
}




bool Graph::add_vertex(vertex *aVertex) {
    bool done =false;
    if(nmbVertices<=maxVertices)
    {
        vertices[nmbVertices] = aVertex;
        for (int i=0; i<maxVertices; i++)
        {
            edges[nmbVertices][i] = NULL_EDGE;
            edges[i][nmbVertices] = NULL_EDGE;
        }
        nmbVertices++;
        done =true;
    }
    return done;

}

bool Graph::add_edge(int fromVertex, int toVertex, int weight) {
    bool done =false;
    int row;
    int column;

    row = index_is(vertices[fromVertex]);
    column = index_is(vertices[toVertex]);
    if(edges[row][column]==0)
    {
        if(weight==-1)    // directed unweighted graph
        {
            edges[row][column] = 1;
        }

        else   // for the undirected  weighted graph
        {
            edges[row][column] = weight;
            edges[column][row] =weight;
        }
        numEdges++;
        done = true;
    }
    return done;

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

void Graph::outputDirectedGraph() {
    cout<<"Graph: (Adjacency Matrix)"<<endl;
    for (int i = 0; i < maxVertices; i++) {
        for (int j = 0; j < maxVertices; j++) {
            cout << edges[i][j] << " ";
        }
        cout << endl;
    }

}

void Graph::mark_vertex(vertex* aVertex)
{
    int ix = index_is(aVertex);
    marks[ix] = true;
}
/*vertex* Graph::get_unmarked()  /////////////////////////////////
{
    for (int i=0; i<nmbVertices; i++)
    {
        if (marks[i] == false)
            return vertices[i];
    }
    return NULL;
}*/

void Graph:: clear_marks()
{
    for (int i=0;i<maxVertices;i++)
        marks[i] = false;
}

void Graph::BFS(vertex* aVertex)
{
    int ix, ix2;
    queue <vertex*> que;
    ix = index_is(aVertex);
    marks[ix] = true;
    que.push(aVertex);

    while (!que.empty())
    {
        vertex* node = que.front();
        que.pop();
        ix = index_is(node);
        cout << node->title << " ";
        for (int i=0; i<nmbVertices; i++)
        {
            ix2 = index_is(vertices[i]);
            if (edges[ix][ix2] != NULL_EDGE)	// if adj vertex
            {
                if (marks[i] == false)
                {
                    marks[i] = true;
                    que.push(vertices[i]);
                }
            }
        }
    }
}

void Graph::DFS(vertex* aVertex)
{

    int ix,ix2;
    if (aVertex == NULL) return;

    cout << aVertex->title << " ";
    ix = index_is(aVertex);
    marks[ix] = true;

    for (int i=0; i<nmbVertices; i++)
    {
        ix2 = index_is(vertices[i]);
        if (edges[ix][ix2] != NULL_EDGE)	// if adj vertex
        {
            if (marks[i] == false)
                DFS(vertices[i]);
        }
    }
}

bool Graph::delete_vertex(vertex *aVertex) {

    bool done =false;
    if(nmbVertices!=0)
    {
        int ix = index_is(aVertex);
        marks[ix] = false;

        for (int i=0; i<maxVertices; i++)
        {
            edges[ix][i] = NULL_EDGE;
            edges[i][ix] = NULL_EDGE;
        }
        nmbVertices--;
        done =true;
    }
    return done;

}

/*bool Graph::deleteEdge(int fromVertex, int toVertex,int weight) {
    int row;
    int column;

    row = index_is(vertices[fromVertex]);
    column = index_is(vertices[toVertex]);
    if(weight==-1)
    {
        edges[row][column] = 0; // directed unweighted graph
    }

    else
    {
        // for the undirected  weighted graph
        edges[row][column] = -1;
        edges[column][row] =-1;
    }


    numEdges--;

}*/

