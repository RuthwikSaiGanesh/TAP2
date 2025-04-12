#include<iostream>
#include<vector>
#include<list>
using namespace std;

class Graph
{
    int v; // No. of vertices
    vector<vector<int>>adj; 

public:
    Graph(int vertices)
    {
    v = vertices;
    adj.resize(v, vector<int>(v,0));
    }
    void addEdge(int u, int v)
    {
        adj[u][v] = 1; // Add v to u's list
        adj[v][u] = 1; // Add u to v's list (for undirected graph)
    }

    void printGraph()
    {
        cout<<"Adjecent Matrix: \n";
        for(int i=0;i<v;i++)
        {
            for(int j=0;j<v;j++)
            {
                cout<<adj[i][j]<<" ";
            }
             cout<<endl;
        }
        
    }
};

int main()
{
    Graph g(5); 
    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    g.printGraph(); 

    return 0;
}



