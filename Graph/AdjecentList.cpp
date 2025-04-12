#include<iostream>
#include<vector>
#include<list>
using namespace std;

/* int main()
{
    int v = 3;
    vector<list<int>> adj(v);                                            // Adjacency list representation of graph
    adj[1].push_back(3);
    adj[1].push_back(2);
  
    adj[2].push_back(1); 
    adj[2].push_back(3);
  
    adj[3].push_back(1);
    adj[3].push_back(2);
}*/

class Graph
{
    int v; // No. of vertices
    vector<list<int>>adj; 

public:
    Graph(int vertices)
    {
    v = vertices;
    adj.resize(v);
    }
    void addEdge(int u, int v)
    {
        adj[u].push_back(v); // Add v to u's list
        adj[v].push_back(u); // Add u to v's list (for undirected graph)
    }
    void printGraph()
    {
        for (int i = 0; i < v; i++)
        {
            cout << "Vertex " << i << ": ";
            for (int neighbor : adj[i])
        {
                cout << neighbor << " ";
        }
            cout << endl;
        }
    }
};

int main()
{
    Graph g(5); // Create a graph with 5 vertices
    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    cout << "Adjacency List of Graph:" << endl;
    g.printGraph();

    return 0;
}