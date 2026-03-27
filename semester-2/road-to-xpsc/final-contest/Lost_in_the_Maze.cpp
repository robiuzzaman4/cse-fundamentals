#include <bits/stdc++.h>
using namespace std;

int n, m;
char grid[1005][1005];
bool visited[1005][1005];
bool is_border_island;

vector<pair<int, int>> movements = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool is_valid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m);
}

void dfs(int si, int sj)
{
    visited[si][sj] = true;

    if (si == 0 || si == n - 1 || sj == 0 || sj == m - 1)
    {
        is_border_island = true;
    }

    for (int i = 0; i < 4; i++)
    {
        int ci = si + movements[i].first;
        int cj = sj + movements[i].second;

        if (is_valid(ci, cj) && grid[ci][cj] == '1' && !visited[ci][cj])
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

    int border_count = 0;
    int center_count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == '1' && !visited[i][j])
            {
                is_border_island = false;
                dfs(i, j);

                if (is_border_island)
                    border_count++;
                else
                    center_count++;
            }
        }
    }

    if (border_count > center_count)
    {
        cout << "Yes" << endl;
        cout << border_count << " " << center_count << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}