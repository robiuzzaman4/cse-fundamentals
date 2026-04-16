#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map<string, int> mp;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        if (mp.count(s) == 0)
        {
            cout << "NO" << "\n";
            mp[s] = 1;
        }
        else
        {
            cout << "YES" << "\n";
            mp[s]++;
        }
    }

    return 0;
}