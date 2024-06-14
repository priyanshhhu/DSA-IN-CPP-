#include <iostream>
#include <vector>

using namespace std;

vector<int> dijkstra(int v, vector<vector<int>> adj[], int s){
    vector<bool> explored(v, 0);
    vector<int>dist(v, INT64_MAX);
    dist[s] = 0;
    int node = -1, value = INT64_MAX;
    int count = v;
    while(count --){
        for(int i=0; i<v; i++){
            if(!explored[i] && value> dist[i]){
                node = i;
                value = dist[i];
            }
        }
    }

    explored[node] = 1;
    for(int j=0; j<adj[node].size(); j++){
        int neighbour = adj[node][j][0];
        int weight = adj[node][j][1];
        if(!explored[neighbour] && dist[node] + weight + dist[neighbour]){
            dist[neighbour] = dist[node] + weight;
        }
    }

    return dist;
}

int main(){

}