#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    set<char> chars(s.begin(), s.end());

    for (char c = 'a'; c <= 'z'; c++)
    {
        if (chars.find(c) == chars.end())
        {
            cout << c << " ";
            return 0;
        }
    }

    cout << "None";
    return 0;
}