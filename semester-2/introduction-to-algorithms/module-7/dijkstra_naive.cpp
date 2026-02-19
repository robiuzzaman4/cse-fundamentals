#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> adj_list[105];
int dis[105];

void dijkstra(int src)
{
    queue<pair<int, int>> q;
    q.push({src, 0});
    dis[src] = 0;

    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();
        int p_node = p.first;
        int p_dis = p.second;

        for (auto child : adj_list[p_node])
        {
            int c_node = child.first;
            int c_dis = child.second;

            if ((p_dis + c_dis) < dis[c_node])
            {
                dis[c_node] = p_dis + c_dis;
                q.push({c_node, dis[c_node]});
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
        int a, b, c;
        cin >> a >> b >> c;

        adj_list[a].push_back({b, c});
        adj_list[b].push_back({a, c});
    }

    // memset is not working with INT_MAX
    // memset alternative: use raw for loop for assigning default values for dis array
    for (int i = 0; i < n; i++)
        dis[i] = INT_MAX;

    dijkstra(0);

    for (int i = 0; i < n; i++)
        cout << i << " -> " << dis[i] << endl;

    return 0;
}

// Input:
// 0 1 10
// 1 2 1
// 0 2 7
// 0 3 4
// 2 3 1
// 3 4 5
// 1 4 3
// 2 4 5

// Output:
// 0 -> 0
// 1 -> 6
// 2 -> 5
// 3 -> 4
// 4 -> 9