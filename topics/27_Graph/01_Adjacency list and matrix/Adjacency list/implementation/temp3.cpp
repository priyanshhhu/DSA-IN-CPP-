// directed unweighted graph

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int vertex, edge;
    cin >> vertex >> edge;

    vector<int> AdjList[vertex]; // Using vector of int to store adjacency list
    int u, v;

    for (int i = 0; i < edge; i++) {
        cin >> u >> v;
        AdjList[u].push_back(v); // Only store the directed edge from u to v
    }

    // Print the adjacency list
    for (int i = 0; i < vertex; i++) {
        cout << i << " => ";
        for (int j = 0; j < AdjList[i].size(); j++) {
            cout << AdjList[i][j] << " "; // Print each connected vertex
        }
        cout << endl;
    }
    return 0;
}
