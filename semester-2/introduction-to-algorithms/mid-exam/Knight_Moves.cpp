#include <bits/stdc++.h>
using namespace std;

int n, m;
bool visited[105][105];
int level[105][105];
vector<pair<int, int>> d = {{-1, 2}, {1, 2}, {1, -2}, {-1, -2}, {2, 1}, {2, -1}, {-2, 1}, {-2, -1}};

bool is_valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    else
        return true;
}

void bfs(int ki, int kj)
{
    queue<pair<int, int>> q;
    q.push({ki, kj});
    visited[ki][kj] = true;
    level[ki][kj] = 0;

    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();
        int pi = p.first;
        int pj = p.second;

        for (int i = 0; i < 8; i++)
        {
            int ci = pi + d[i].first;
            int cj = pj + d[i].second;

            if (is_valid(ci, cj) && !visited[ci][cj])
            {
                q.push({ci, cj});
                visited[ci][cj] = true;
                level[ci][cj] = level[pi][pj] + 1;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        memset(visited, false, sizeof(visited));
        memset(level, -1, sizeof(level));

        cin >> n >> m;
        int ki, kj;
        cin >> ki >> kj;
        int qi, qj;
        cin >> qi >> qj;

        bfs(ki, kj);

        cout << level[qi][qj] << endl;
    }

    return 0;
}