#include <bits/stdc++.h>
using namespace std;

int n, m;
char grid[1005][1005];
bool visited[1005][1005];
vector<pair<int, int>> d = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};
int cnt = 0;
int mn = INT_MAX;

bool is_valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    else
        return true;
}

void dfs(int si, int sj, char (&grid)[1005][1005])
{
    visited[si][sj] = true;
    cnt++;

    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;

        if (is_valid(ci, cj) && !visited[ci][cj] && grid[ci][cj] == '.')
            dfs(ci, cj, grid);
    }
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];
    }

    memset(visited, false, sizeof(visited));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!visited[i][j] && grid[i][j] == '.')
            {
                cnt = 0;
                dfs(i, j, grid);
                mn = min(mn, cnt);
            }
        }
    }

    mn = min(mn, cnt);

    if (mn > 0)
        cout << mn;
    else
        cout << -1;

    return 0;
}