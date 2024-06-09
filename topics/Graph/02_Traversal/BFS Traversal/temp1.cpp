#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> BFSgraph(int v, vector<int> adj[])
{
    queue<int> q;
    q.push(0);
    vector<bool> visited(v, 0);
    visited[0] = 1;

    vector<int> ans;
    int node;
    while (!q.empty()){
        node = q.front();
        q.pop();
        ans.push_back(node);

        for (int j = 0; j < adj[node].size(); j++){
            if (!visited[adj[node][j]]){
                visited[adj[node][j]] = 1;
                q.push(adj[node][j]);
            }
        }
    }
}

int main()
{
    int vertex, edge;
    cin >> vertex >> edge;

    vector<int> AdjList[vertex];
    int u, v;

    for (int i = 0; i < edge; i++)
    {
        cin >> u >> v;
        AdjList[u].push_back(v);
    }

    return 0;
}