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
        string b;
        cin >> n >> b;

        set<char> unique_chars;
        for (char c : b)
            unique_chars.insert(c);

        string r = "";
        for (char c : unique_chars)
        {
            r += c;
        }

        map<char, char> mapping;
        int m = r.length();
        for (int i = 0; i < m; i++)
        {
            mapping[r[i]] = r[m - 1 - i];
        }

        string s = "";
        for (char c : b)
        {
            s += mapping[c];
        }

        cout << s << endl;
    }

    return 0;
}