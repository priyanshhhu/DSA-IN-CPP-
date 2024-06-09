// undirected unweighted graph
#include <iostream>
#include <vector>
#include <utility> // Include the utility header for make_pair
using namespace std;

int main() {
    int vertex, edge;
    cin >> vertex >> edge;

    vector<pair<int, int>> AdjList[vertex]; // Corrected type to vector of pairs
    int u, v, weight;

    for (int i = 0; i < edge; i++) {
        cin >> u >> v >> weight; // Read the weight from input
        AdjList[u].push_back(make_pair(v, weight));
        AdjList[v].push_back(make_pair(u, weight));
    }

    // Print
    for (int i = 0; i < vertex; i++) {
        cout << i << " => ";
        for (int j = 0; j < AdjList[i].size(); j++) {
            cout << "(" << AdjList[i][j].first << ", " << AdjList[i][j].second << ") "; // Format output for readability
        }
        cout << endl;
    }
    return 0;
}
