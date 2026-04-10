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
        string s;
        cin >> s;

        int freq[26] = {0};

        for (int i = 0; i < n; i++)
        {
            freq[s[i] - 'a']++;
        }

        int odd_count = 0;
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] % 2 != 0)
            {
                odd_count++;
            }
        }

        if (k >= odd_count - 1 && k <= n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}