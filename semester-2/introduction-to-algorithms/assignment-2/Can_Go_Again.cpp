#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int a, b;
    long long int w;
    Edge(int a, int b, long long int w)
    {
        this->a = a;
        this->b = b;
        this->w = w;
    }
};

int n, e;
long long int dis[1005];
vector<Edge> edge_list;
bool cycle = false;
int src;

void bellman_ford(int d)
{
    dis[src] = 0;

    for (int i = 1; i < n; i++)
    {
        for (auto e : edge_list)
        {
            int a, b;
            long long int w;
            a = e.a;
            b = e.b;
            w = e.w;

            if (dis[a] != LLONG_MAX && dis[a] + w < dis[b])
                dis[b] = dis[a] + w;
        }
    }

    for (auto e : edge_list)
    {
        int a, b;
        long long int w;
        a = e.a;
        b = e.b;
        w = e.w;

        if (dis[a] != LLONG_MAX && dis[a] + w < dis[b])
        {
            cycle = true;
            break;
        }
    }
}

int main()
{
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        long long int w;
        cin >> a >> b >> w;
        edge_list.push_back(Edge(a, b, w));
    }

    for (int i = 1; i <= n; i++)
        dis[i] = LLONG_MAX;

    int t;
    cin >> src >> t;

    while (t--)
    {
        int d;
        cin >> d;

        bellman_ford(d);

        if (cycle)
        {
            cout << "Negative Cycle Detected" << endl;
            break;
        }
        else if (dis[d] == LLONG_MAX)
            cout << "Not Possible" << endl;
        else
            cout << dis[d] << endl;
    }
    return 0;
}