#include<iostream>
#include<vector>
using namespace std;

class Graph
{
    int v;
    vector<vector<int>> adj; 

    public:
    Graph(int vertices)
    {
        v = vertices;
        adj.resize(v);
    }
    void addEdge(int u, int v)
    {
        adj[u].push_back(v);
        adj[v].push_back(u); 
    }
    void dfsHelper(int node, vector<bool>& visited)
    {
        visited[node] = true; 
        cout << node << " "; 

        for (int neighbor : adj[node])
        {
            if (!visited[neighbor])
            {
                dfsHelper(neighbor, visited); 
            }
        }
    }
    void dfs(int startNode)
    {
        vector<bool> visited(v, false); 
       cout<<"DFS starting from node "<<startNode<<" : ";
        dfsHelper(startNode, visited); 
        cout << endl;
    }
};

int main()
{
    Graph g(6); 
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 4);
    g.addEdge(1, 0);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 2);
    g.addEdge(3, 4);
    g.addEdge(4, 1);
    g.addEdge(4, 3);
    g.addEdge(4, 5);
    g.addEdge(5, 4);
    g.dfs(0); 
    g.dfs(3); 
    g.dfs(5); 
    return 0;
}