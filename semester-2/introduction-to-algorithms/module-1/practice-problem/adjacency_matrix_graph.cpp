#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    int adj_matrix[n][n];

    // set all matrix value with 0
    memset(adj_matrix, 0, sizeof(adj_matrix));

    // set diagonals to 1
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                adj_matrix[i][j] = 1;
        }
    }

    // read all 'e' edges and set connection on matrix
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        adj_matrix[a - 1][b - 1] = 1;
        adj_matrix[b - 1][a - 1] = 1;
    }

    // print adjacency matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << adj_matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}