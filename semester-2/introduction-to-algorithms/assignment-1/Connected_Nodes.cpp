#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1000005];

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

    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;

        sort(adj_list[x].begin(), adj_list[x].end(), greater<int>());

        if (adj_list[x].empty())
        {
            cout << -1 << endl;
        }
        else
        {
            for (int n : adj_list[x])
            {
                cout << n << " ";
            }
            cout << endl;
        }
    }

    return 0;
}