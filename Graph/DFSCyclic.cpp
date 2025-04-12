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
    void CheckCyclic(int node, vector<bool>& visited, vector<int>& parent)
    {
        visited[node] = true; 
        for (int neighbor : adj[node])
        {
            if (!visited[neighbor])
            {
                if(CheckCyclic(neighbor, visited, parent))
                {
                    return true; 
                }
            }
            else if(neighbor != parent)
            {
                return true; 
            }
        }
        return false;
    }
    bool isCyclic()
    {
        vector<bool> visited(v, false); 
        for(int i=0;i<v;i++)
        {
            if(!visited[i])
            {
                if(CheckCyclic(i, visited, -1))
                {
                    return true; 
                }
            }
        }
        
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

    if(g.isCyclic())
        cout<<"Graph is Cyclic"<<endl;
    else
        cout<<"Graph is Acyclic"<<endl;

        return 0;
}


