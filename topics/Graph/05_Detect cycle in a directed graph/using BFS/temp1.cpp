#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool isCyclic(int v, vector<int> adj[]) {
    vector<int> InDeg(v, 0);

    // Calculate in-degrees of all nodes
    for (int i = 0; i < v; i++) {
        for (int j = 0; j < adj[i].size(); j++) {
            InDeg[adj[i][j]]++;
        }
    }

    queue<int> q;

    // Push all nodes with in-degree 0 into the queue
    for (int i = 0; i < v; i++) {
        if (InDeg[i] == 0) {
            q.push(i);
        }
    }
    int count = 0;

    // Process nodes with in-degree 0
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        count++;

        for (int j = 0; j < adj[node].size(); j++) {
            InDeg[adj[node][j]]--;

            if (InDeg[adj[node][j]] == 0) {
                q.push(adj[node][j]);
            }
        }
    }

    return count != v;
}

int main() {
    // Example usage
    int v = 4; // Number of vertices
    vector<int> adj[v];

    // Add edges
    adj[0].push_back(1);
    adj[1].push_back(2);
    adj[2].push_back(3);
    adj[3].push_back(1);

    if (isCyclic(v, adj)) {
        cout << "Graph contains cycle" << endl;
    } else {
        cout << "Graph doesn't contain cycle" << endl;
    }

    return 0;
}
