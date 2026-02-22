#include <bits/stdc++.h>
using namespace std;

int n, m;
char grid[105][105];
bool visited[105][105];
int level[105][105];
vector<pair<int, int>> movements = {{-1, 2}, {1, 2}, {1, -2}, {-1, -2}, {2, 1}, {2, -1}, {-2, 1}, {-2, -1}};

bool is_valid(int i, int j)
{
    if (i < 1 || i > n || j < 1 || j > m)
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
        int pi = p.first;
        int pj = p.second;

        for (int i = 0; i < 8; i++)
        {
            int ci = pi + movements[i].first;
            int cj = pj + movements[i].second;

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
    n = 8, m = 8;

    int t;
    cin >> t;
    while (t--)
    {
        memset(visited, false, sizeof(visited));
        memset(level, -1, sizeof(level));

        string s, d;
        cin >> s >> d;
        int si = s[1] - '0';
        int sj = s[0] - 'a' + 1;
        int di = d[1] - '0';
        int dj = d[0] - 'a' + 1;

        bfs(si, sj);

        cout << level[di][dj] << endl;
    }

    return 0;
}