#include <bits/stdc++.h>
using namespace std;

int par[100005];
int group_size[100005];

int cmp, mx;

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
        mx = max(mx, group_size[l1]);
    }
    else
    {
        par[l1] = l2;
        group_size[l2] += group_size[l1];
        mx = max(mx, group_size[l2]);
    }

    cmp--;
}

int main()
{
    int n, e;
    cin >> n >> e;

    cmp = n;
    mx = 1;

    for (int i = 1; i <= n; i++)
    {
        par[i] = -1;
        group_size[i] = 1;
    }

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        dsu_union(a, b);
        cout << cmp << " " << mx << endl;
    }

    return 0;
}