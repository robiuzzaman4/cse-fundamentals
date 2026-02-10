#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];
bool visited[1005];
int level[1005];
int parent[1005];

void bfs(int src, int dest)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;
    level[src] = 0;

    while (!q.empty())
    {
        // ber kore ana
        int p = q.front();
        q.pop();

        // kaj

        // child push
        for (int child : adj_list[p])
        {
            if (!visited[child])
            {
                q.push(child);
                visited[child] = true;
                level[child] = level[p] + 1;
                parent[child] = p;
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    memset(visited, false, sizeof(visited));
    memset(level, -1, sizeof(level));
    memset(parent, -1, sizeof(parent));

    int src, dest;
    cin >> src >> dest;

    bfs(src, dest);

    vector<int> path;
    int node = dest;
    while (node != -1)
    {
        path.push_back(node);
        node = parent[node];
    }

    reverse(path.begin(), path.end());

    for (int x : path)
        cout << x << " ";

    return 0;
}