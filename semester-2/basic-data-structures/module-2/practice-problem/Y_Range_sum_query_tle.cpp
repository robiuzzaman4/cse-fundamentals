#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<long long int> v(n);

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    for (int i = 1; i <= q; i++)
    {
        int l, r;
        cin >> l >> r;

        long long int sum = 0;

        for (int j = l; j <= r; j++)
        {
            sum += v[j];
        }

        cout << sum << endl;
    }

    return 0;
}