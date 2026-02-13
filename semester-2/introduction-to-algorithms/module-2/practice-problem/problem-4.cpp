#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];
bool visited[1005];
int level[1005];

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    visited[s] = true;
    level[s] = 0;

    while (!q.empty())
    {
        int p = q.front();
        q.pop();

        for (int child : adj_list[p])
        {
            if (!visited[child])
            {
                q.push(child);
                visited[child] = true;
                level[child] = level[p] + 1;
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

    bfs(0);

    int l;
    cin >> l;

    vector<int> nodes;

    for (int i = 0; i < 1005; i++)
    {
        if (level[i] == l)
            nodes.push_back(i);
    }

    sort(nodes.begin(), nodes.end(), greater<int>());

    for (int i = 0; i < nodes.size(); i++)
        cout << nodes[i] << " ";

    return 0;
}