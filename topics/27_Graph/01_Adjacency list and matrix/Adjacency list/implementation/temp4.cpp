// directed weighted graph

#include <iostream>
#include <vector>
#include <utility> // Include the utility header for std::pair
using namespace std;

int main() {
    int vertex, edge;
    cin >> vertex >> edge;

    vector<pair<int, int>> AdjList[vertex]; // Using vector of pairs to store adjacency list with weights
    int u, v, weight;

    for (int i = 0; i < edge; i++) {
        cin >> u >> v >> weight;
        AdjList[u].push_back(make_pair(v, weight)); // Store the directed edge from u to v with the given weight
    }

    // Print the adjacency list
    for (int i = 0; i < vertex; i++) {
        cout << i << " => ";
        for (int j = 0; j < AdjList[i].size(); j++) {
            cout << "(" << AdjList[i][j].first << ", " << AdjList[i][j].second << ") "; // Print each connected vertex with weight
        }
        cout << endl;
    }
    return 0;
}
