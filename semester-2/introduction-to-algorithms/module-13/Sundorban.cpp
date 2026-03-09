#include <bits/stdc++.h>
using namespace std;

int n;
char grid[35][35];
bool visited[35][35];
int level[35][35];
vector<pair<int, int>> movements = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool is_valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= n)
        return false;
    else
        return true;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    visited[si][sj] = true;
    level[si][sj] = 0;
    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();
        int p_i = p.first;
        int p_j = p.second;

        for (int i = 0; i < 4; i++)
        {
            int ci = p_i + movements[i].first;
            int cj = p_j + movements[i].second;

            if (is_valid(ci, cj) && !visited[ci][cj] & grid[ci][cj] != 'T')
            {
                q.push({ci, cj});
                visited[ci][cj] = true;
                level[ci][cj] = level[p_i][p_j] + 1;
            }
        }
    }
}

int main()
{
    while (cin >> n)
    {
        int si, sj, di, dj;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> grid[i][j];
                if (grid[i][j] == 'S')
                {
                    si = i, sj = j;
                }
                if (grid[i][j] == 'E')
                {
                    di = i, dj = j;
                }
            }
        }

        memset(visited, false, sizeof(visited));
        memset(level, -1, sizeof(level));

        bfs(si, sj);

        cout << level[di][dj] << endl;
    }

    return 0;
}
