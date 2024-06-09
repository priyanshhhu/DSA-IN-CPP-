#include <iostream>
#include <vector>

using namespace std;

bool DetectCycle(int node, vector<int> adj[], vector<bool> &path, vector<bool> &visited) {
    visited[node] = true;
    path[node] = true;

    for (int j : adj[node]) {
        if (path[j]) {
            return true;
        }
        if (!visited[j] && DetectCycle(j, adj, path, visited)) {
            return true;
        }
    }

    path[node] = false;
    return false;
}

bool isCycle(int v, vector<int> adj[]) {
    vector<bool> path(v, false);
    vector<bool> visited(v, false);

    for (int i = 0; i < v; i++) {
        if (!visited[i] && DetectCycle(i, adj, path, visited)) {
            return true;
        }
    }

    return false;
}

int main() {
    // Example usage
    int v = 4;
    vector<int> adj[v];

    // Add edges
    adj[0].push_back(1);
    adj[1].push_back(2);
    adj[2].push_back(3);
    adj[3].push_back(1);

    if (isCycle(v, adj)) {
        cout << "Graph contains cycle" << endl;
    } else {
        cout << "Graph doesn't contain cycle" << endl;
    }

    return 0;
}
