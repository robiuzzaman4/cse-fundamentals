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
        vector<long long int> a(n);
        for (long long int i = 0; i < n; i++)
            cin >> a[i];

        int m;
        cin >> m;
        while (m--)
        {
            string s;
            cin >> s;

            if (s.length() != n)
            {
                cout << "NO" << "\n";
                continue;
            }

            map<long long, char> num_to_char;
            map<char, long long> char_to_num;
            bool ok = true;

            for (int i = 0; i < n; i++)
            {
                if (num_to_char.count(a[i]))
                {
                    if (num_to_char[a[i]] != s[i])
                    {
                        ok = false;
                        break;
                    }
                }
                else
                {
                    num_to_char[a[i]] = s[i];
                }

                if (char_to_num.count(s[i]))
                {
                    if (char_to_num[s[i]] != a[i])
                    {
                        ok = false;
                        break;
                    }
                }
                else
                {
                    char_to_num[s[i]] = a[i];
                }
            }

            if (ok)
                cout << "YES" << "\n";
            else
                cout << "NO" << "\n";
        }
    }

    return 0;
}