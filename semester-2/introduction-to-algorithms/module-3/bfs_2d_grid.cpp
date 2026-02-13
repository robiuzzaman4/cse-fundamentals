#include <bits/stdc++.h>
using namespace std;

int n, m;
char grid[105][105];
bool visited[105][105];
vector<pair<int, int>> movements = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool is_valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
    {
        return false;
    }
    else
    {
        return true;
    }
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    visited[si][sj] = true;
    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();
        int p_i = p.first;
        int p_j = p.second;

        cout << p_i << " " << p_j << endl;

        for (int i = 0; i < 4; i++)
        {
            int ci = p_i + movements[i].first;
            int cj = p_j + movements[i].second;

            if (is_valid(ci, cj) && !visited[ci][cj])
            {
                q.push({ci, cj});
                visited[ci][cj] = true;
            }
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

    int si, sj;
    cin >> si >> sj;

    bfs(si, sj);

    return 0;
}

// input:
// 3 4
// . . . .
// . . . .
// . . . .
// 1 2

// output:
// 1 2
// 0 2
// 2 2
// 1 1
// 1 3
// 0 1
// 0 3
// 2 1
// 2 3
// 1 0
// 0 0
// 2 0