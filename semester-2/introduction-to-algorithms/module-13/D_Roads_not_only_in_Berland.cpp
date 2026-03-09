#include <bits/stdc++.h>
using namespace std;

int par[1005];
int group_size[1005];

int find(int node)
{
    if (par[node] == -1)
        return node;

    int l = find(par[node]);
    par[node] = l;

    return l;
}

void dsu_union(int node1, int node2)
{
    int l1 = find(node1);
    int l2 = find(node2);
    if (l1 == l2)
        return;

    if (group_size[l1] > group_size[l2])
    {
        par[l2] = l1;
        group_size[l1] += group_size[l2];
    }
    else
    {
        par[l1] = l2;
        group_size[l2] += group_size[l1];
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        par[i] = -1;
        group_size[i] = 1;
    }

    vector<pair<int, int>> removed_roads;
    vector<pair<int, int>> added_roads;

    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;

        int lA = find(a);
        int lB = find(b);
        if (lA == lB)
            removed_roads.push_back({a, b});
        else
            dsu_union(a, b);
    }

    for (int i = 2; i <= n; i++)
    {
        int leader1 = find(1);
        int leader2 = find(i);
        if (leader1 != leader2)
        {
            added_roads.push_back({1, i});
            dsu_union(1, i);
        }
    }

    cout << removed_roads.size() << endl;

    for (int i = 0; i < removed_roads.size(); i++)
    {
        cout << removed_roads[i].first << " " << removed_roads[i].second << " " << added_roads[i].first << " " << added_roads[i].second << endl;
    }

    return 0;
}