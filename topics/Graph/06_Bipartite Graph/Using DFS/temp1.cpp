#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool checkBip(int node, vector<int>adj[], vector<int>&color){
    // look at each neighbour
    for(int j=0; j<adj[node].size(); j++){
        // if color is not assigned
        if(color[adj[node][j]] == -1){
            color[adj[node][j]] = (color[node]+1)%2;
            if(!checkBip(adj[node][j], adj, color)){
                return 0;
            }
        }else{
        // if color is assigned
            if(color[node] == color[adj[node][j]]){
                return 0;
            }
        }
    }

    return 1;
}

bool isBipartite(int v, vector<int> adj[])
{
    vector<int>color(v, -1);
    
    for(int i=0; i<v; i++){
        if(color[i]==-1){
            color[i] = 0;
            if(!checkBip(i,adj,color)){
                return 0;
            }
        }
    }

    return 1;
}

int main()
{

    return 0;
}