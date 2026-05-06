#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> jars(n);

        for (int i = 0; i < n; i++)
        {
            int jar;
            cin >> jar;
            jars[i] = jar;
        }

        sort(jars.begin(), jars.end(), greater<int>());

        for (int i = 0; i < n; i++)
        {
            int jar_candeis = jars[i];
            if (jar_candeis % x == 0)
            {
                cout << jar_candeis << "\n";
                break;
            }

            if (jar_candeis % x != 0 && i == n - 1)
            {
                cout << 0 << "\n";
                break;
            }
        }
    }

    return 0;
}