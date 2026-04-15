#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map<string, int> mp;

    while (n--)
    {
        string s;
        cin >> s;

        if (mp.count(s) == 0)
        {
            cout << "OK" << "\n";
            mp[s] = 1;
        }
        else
        {
            cout << s << mp[s] << "\n";
            mp[s]++;
        }
    }

    return 0;
}