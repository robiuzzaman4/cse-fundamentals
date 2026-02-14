#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];
bool visited[1005];
int cnt;

void dfs(int src)
{
    visited[src] = true;
    cnt++;

    for (int child : adj_list[src])
    {
        if (!visited[child])
            dfs(child);
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
    vector<int> component_sizes;

    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            cnt = 0;
            dfs(i);
            component_sizes.push_back(cnt);
        }
    }

    sort(component_sizes.begin(), component_sizes.end());

    for (int x : component_sizes)
    {
        cout << x << " ";
    }

    return 0;
}