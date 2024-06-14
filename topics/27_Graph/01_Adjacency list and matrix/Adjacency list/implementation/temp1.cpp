// undirected unweighted graph
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int vertex, edge;
    cin>>vertex>>edge;

    vector<int>AdjList[vertex];
    int u, v;

    for(int i=0; i<edge; i++){
        cin>>u>>v;
        AdjList[u].push_back(v);
        AdjList[v].push_back(u);
    }

    // print

    for(int i=0; i<vertex; i++){
        cout<<i<<" => ";
        for(int j=0; j<AdjList[i].size(); j++){
            cout<<AdjList[i][j]<<" ";
        }

        cout<<endl;
    }
    return 0;
}