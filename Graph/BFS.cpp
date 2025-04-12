#include<iostream>
#include<vector>
#include<queue>
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
    void BFS(int start)
    {
        queue<int> q;
        vector<bool> visited(v, false);
        visited[start] = true;
        q.push(start);

        cout<<"BFS starting from node "<<start<<" : ";
        while(!q.empty())
        {
            int node = q.front();
            q.pop(); 
            cout<<node<<" "; 
            for(int neighbour :adj[node])
            {
                if(!visited[neighbour])
                {
                    visited[neighbour] =true;
                    q.push(neighbour);
                }
            } 
        } 
        cout<<endl;
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
    g.BFS(0); 
    g.BFS(3); 
    g.BFS(5); 
    return 0;
}