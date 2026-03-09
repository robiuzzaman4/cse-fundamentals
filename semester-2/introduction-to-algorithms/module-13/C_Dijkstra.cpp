#include <bits/stdc++.h>
using namespace std;
#define ll long long int

vector<pair<ll, ll>> adj_list[100005];
ll dis[100005];
ll par[100005];

void dijkstra(ll src)
{
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    pq.push({0, src});
    dis[src] = 0;

    while (!pq.empty())
    {
        pair<ll, ll> p = pq.top();
        pq.pop();
        ll p_node = p.second;
        ll p_dis = p.first;

        for (auto child : adj_list[p_node])
        {
            ll c_node = child.first;
            ll c_dis = child.second;

            if ((p_dis + c_dis) < dis[c_node])
            {
                dis[c_node] = p_dis + c_dis;
                pq.push({dis[c_node], c_node});
                par[c_node] = p_node;
            }
        }
    }
}

int main()
{
    ll n, e;
    cin >> n >> e;

    while (e--)
    {
        ll a, b, c;
        cin >> a >> b >> c;

        adj_list[a].push_back({b, c});
        adj_list[b].push_back({a, c});
    }

    for (ll i = 1; i <= n; i++)
    {
        dis[i] = LLONG_MAX;
        par[i] = -1;
    }

    dijkstra(1);

    if (dis[n] == LLONG_MAX)
        cout << -1 << endl;
    else
    {
        ll node = n;
        vector<ll> path;
        while (node != -1)
        {
            path.push_back(node);
            node = par[node];
        }
        reverse(path.begin(), path.end());
        for (auto x : path)
        {
            cout << x << " ";
        }
    }

    return 0;
}