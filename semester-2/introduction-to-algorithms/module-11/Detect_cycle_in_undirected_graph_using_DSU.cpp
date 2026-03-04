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
    int n, e;
    cin >> n >> e;

    memset(par, -1, sizeof(par));
    memset(group_size, 1, sizeof(group_size));

    bool cycle = false;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int l1 = find(a);
        int l2 = find(b);
        if (l1 == l2)
            cycle = true;
        else
            dsu_union(a, b);
    }

    if (cycle)
        cout << "Cycle Found";
    else
        cout << "No Cycle Found";

    return 0;
}