#include <bits/stdc++.h>
using namespace std;

void dfs(int src, vector<vector<int>> &adj_list, vector<bool> &vis)
{
    vis[src] = true;

    for (int child : adj_list[src])
    {
        if (!vis[child])
            dfs(child, adj_list, vis);
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj_list(n + 1);
    vector<bool> vis(n + 1);

    while (m--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    vector<int> result;
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            dfs(i, adj_list, vis);
            result.push_back(i);
        }
    }

    int required_roads = result.size() - 1;
    cout << required_roads << endl;

    if (result.size() > 1)
    {
        for (int i = 0; i < required_roads; i++)
        {
            cout << result[i] << " " << result[i + 1] << endl;
        }
    }

    return 0;
}