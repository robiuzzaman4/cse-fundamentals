#include <bits/stdc++.h>
using namespace std;

int n, m;
char grid[1005][1005];
bool visited[1005][1005];
vector<pair<int, int>> movements = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int cnt = 0;

bool is_valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    else
        return true;
}

void dfs(int si, int sj)
{
    visited[si][sj] = true;
    cnt++;

    for (int i = 0; i < 4; i++)
    {
        int ci = si + movements[i].first;
        int cj = sj + movements[i].second;

        if (is_valid(ci, cj) && !visited[ci][cj] && grid[ci][cj] != '#')
        {
            dfs(ci, cj);
        }
    }
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }

    memset(visited, false, sizeof(visited));

    vector<int> rooms;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cnt = 0;
            if (grid[i][j] != '#' && !visited[i][j])
            {
                dfs(i, j);
                rooms.push_back(cnt);
            }
        }
    }

    sort(rooms.begin(), rooms.end());

    if (rooms.empty())
    {
        cout << 0;
    }
    else
    {
        for (int x : rooms)
            cout << x << " ";
    }

    return 0;
}