#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool isBipartite(int v, vector<int> adj[])
{
    vector<int> color(v, -1);

    queue<int> q;

    for (int i = 0; i < v; i++)
    {
        if (color[i] == -1)
        {
            q.push(i);
            color[i] = 0;

            while (!q.empty())
            {
                int node = q.front();
                q.pop();

                for (int j = 0; j < adj[node].size(); j++)
                {
                    // color not assign
                    if (color[adj[node][j]] == -1)
                    {
                        color[adj[node][j]] = (color[node] + 1);
                        q.push(adj[node][j]);
                    }
                    // color is already assign
                    else
                    {
                        if (color[node] == color[adj[node][j]])
                        {
                            return 0;
                        }
                    }
                }
            }
        }
    }

    return 1;
}

int main()
{

    return 0;
}