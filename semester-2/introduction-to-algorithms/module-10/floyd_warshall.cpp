#include <bits/stdc++.h>
using namespace std;

int main()
{
    int v, e;
    cin >> v >> e;
    int adj_matrix[v][v];

    // initialize matrix with INT_MAX value and set '0' for diagonal
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            if (i == j)
                adj_matrix[i][j] = 0;
            else
                adj_matrix[i][j] = INT_MAX;
        }
    }

    // tacking inputs and assign to the matrix
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj_matrix[a][b] = c;
    }

    // floyd warshall
    for (int k = 0; k < v; k++)
    {
        for (int i = 0; i < v; i++)
        {
            for (int j = 0; j < v; j++)
            {
                if (
                    adj_matrix[i][k] != INT_MAX &&
                    adj_matrix[k][j] != INT_MAX &&
                    adj_matrix[i][k] + adj_matrix[k][j] < adj_matrix[i][j])
                {
                    adj_matrix[i][j] = adj_matrix[i][k] + adj_matrix[k][j];
                }
            }
        }
    }

    // printing matrix
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            if (adj_matrix[i][j] == INT_MAX)
                cout << "INF ";
            else
                cout << adj_matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}