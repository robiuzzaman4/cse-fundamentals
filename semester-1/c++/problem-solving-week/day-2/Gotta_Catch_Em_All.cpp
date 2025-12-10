#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += min(a[i] * x, y);
        }

        cout << sum << endl;
    }

    return 0;
}