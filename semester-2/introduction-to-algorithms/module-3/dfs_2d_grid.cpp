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
    cout << si << " " << sj << endl;
    visited[si][sj] = true;

    for (int i = 0; i < movements.size(); i++)
    {
        // finding child idx
        int ci = si + movements[i].first;
        int cj = sj + movements[i].second;

        if (is_valid(ci, cj) && !visited[ci][cj])
        {
            bfs(ci, cj);
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
// 0 1
// 1 1
// 2 1
// 2 0
// 1 0
// 0 0
// 2 2
// 2 3
// 1 3
// 0 3
