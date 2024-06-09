// using bfs
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> shortestPath(vector<pair<int,int>>edges, int n, int m, int src, int dest){
    // adjacency list create
    vector<int>adj[n];

    for(int i=0; i<m; i++){
        adj[edges[i].first-1].push_back(edges[i].second-1);
        adj[edges[i].second-1].push_back(edges[i].first-1);
    }

    src--;
    dest--;

    vector<int>dist(n, -1);
    vector<bool>visited(n, 0);
    queue<int>q;

    q.push(src);

    dist[src] = 0;
    visited[src] = 1;

    vector<int>parent(n, -1);

    while(!q.empty()){
        int node = q.front();
        q.pop();

        // look at all the neighbour
        for(int j=0; j<adj[node].size(); j++){
            if(visited[adj[node][j]])
            continue;

            visited[adj[node][j]] = 1;
            q.push(adj[node][j]);
            dist[adj[node][j]] = dist[node] + 1;
            parent[adj[node][j]] = node;
        }
    }

    vector<int>path;
    while(dest!= -1){
        path.push_back(dest+1);
        dest = parent[dest];
    }

    reverse(path.begin(), path.end());

    return path;
}

int main(){
    
    return 0;
}