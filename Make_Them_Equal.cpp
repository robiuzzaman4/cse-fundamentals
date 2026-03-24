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
        string a, b;
        cin >> a >> b;

        int diff_count = 0;
        for (int i = 0; i < n; ++i)
        {
            if (a[i] != b[i])
            {
                diff_count++;
            }
        }

        if (diff_count <= k)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}

