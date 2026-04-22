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
        int n;
        cin >> n;
        string s;
        cin >> s;

        bool can_recover = true;

        int i = 0;
        int j = n - 1;
        while (i <= j)
        {
            if (s[i] == '?' && s[j] == '?')
            {
                can_recover = false;
                break;
            }

            i++;
            j--;
        }

        if (can_recover)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}