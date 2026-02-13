#include <bits/stdc++.h>
using namespace std;

int n, m;
char grid[105][105];
bool visited[105][105];
int level[105][105];
pair<int, int> parent[105][105];
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

            if (is_valid(ci, cj) && !visited[ci][cj])
            {
                q.push({ci, cj});
                visited[ci][cj] = true;
                level[ci][cj] = level[p_i][p_j] + 1;
                parent[ci][cj] = {p.first, p.second};
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
    memset(level, -1, sizeof(level));
    memset(parent, -1, sizeof(parent));

    int si, sj, di, dj;
    cin >> si >> sj >> di >> dj;

    bfs(si, sj);

    cout << "Shortest Distance: " << level[di][dj] << endl;

    vector<pair<int, int>> path;
    pair<int, int> node = {di, dj};
    while (node.first != -1)
    {
        path.push_back(node);
        node = parent[node.first][node.second];
    }

    // reverse(path.begin(), path.end());

    cout << "Shortest Path: ";
    for (int i = 0; i < path.size(); i++)
    {
        cout << "[" << path[i].first << " " << path[i].second << "]";
        if (i < path.size() - 1)
        {
            cout << " -> ";
        }
    }
    cout << endl;
    return 0;
}

// input:
// 3 4
// . . . .
// . . . .
// . . . .
// 1 2
// 2 0

// output:
// Shortest Distance: 3
// Shortest Path: [2 0] -> [2 1] -> [2 2] -> [1 2]

