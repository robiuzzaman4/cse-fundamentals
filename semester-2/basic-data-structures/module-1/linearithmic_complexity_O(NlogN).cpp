#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) // o(n)
    {
        for (int j = 1; j <= m; j *= 2) // o(logN)
        {
            cout << "MYP" << endl;
        }
    }

    // final complexity = o(NlogN)

    return 0;
}