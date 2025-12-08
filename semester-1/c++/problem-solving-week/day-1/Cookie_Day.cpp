#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int waste = INT_MAX;

        // for (int i = 0; i < n; i++)
        // {
        //     int jar_cookies = a[i];
        //     if (jar_cookies >= k)
        //     {
        //         int current_remain = jar_cookies % k;
        //         if (current_remain < waste)
        //         {
        //             waste = current_remain;
        //         }
        //     }
        // }

        // alternative solution
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= k)
            {
                waste = min(a[i] % k, waste);
            }
        }

        if (waste == INT_MAX)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << waste << endl;
        }
    }
}
