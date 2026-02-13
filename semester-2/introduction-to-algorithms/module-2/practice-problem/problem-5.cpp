#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];

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

    int target_node;
    cin >> target_node;

    cout << adj_list[target_node].size() << endl;

    return 0;
}