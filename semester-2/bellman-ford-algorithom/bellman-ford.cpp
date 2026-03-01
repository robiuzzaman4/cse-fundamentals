#include <bits/stdc++.h>
using namespace std;

struct Edge
{
    int u, v, weight;
};

void bellman_ford(int V, int E, int src, vector<Edge> &edges)
{
    vector<int> dist(V, INT_MAX);
    dist[src] = 0;

    // relax all edges v - 1 times
    for (int i = 1; i < V - 1; i++)
    {
        for (int j = 1; j < E; j++)
        {
            int u = edges[j].u;
            int v = edges[j].v;
            int weight = edges[j].weight;

            if (dist[u] != INT_MAX && dist[u] + weight < dist[v])
                dist[v] = dist[u] + weight;
        }
    }

    // check for negative-weight cycles
    for (int j = 0; j < E; j++)
    {
        int u = edges[j].u;
        int v = edges[j].v;
        int weight = edges[j].weight;
        if (dist[u] != INT_MAX && dist[u] + weight < dist[v])
        {
            cout << "Graph contains a negative weight cycle!" << endl;
            return;
        }
    }

    // print the distances
    cout << "Vertex Distance from Source:" << endl;
    for (int i = 0; i < V; i++)
    {
        cout << i << "\t\t" << (dist[i] == INT_MAX ? -1 : dist[i]) << endl;
    }
}

int main()
{
    int V = 5;
    int E = 8;

    vector<Edge> edges = {{0, 1, -1}, {0, 2, 4}, {1, 2, 3}, {1, 3, 2}, {1, 4, 2}, {3, 2, 5}, {3, 1, 1}, {4, 3, -3}};

    bellman_ford(V, E, 0, edges);

    return 0;
}