#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int i = 0;
        for (i = 1; i < s.size(); i++)
        {
            if (s[i] == s[i - 1])
            {
                break;
            }
        }
        if (s[i - 1] != 'a')
            s.insert(s.begin() + i, 'a');
        else
            s.insert(s.begin() + i, 'b');

        cout << s << endl;
    }

    return 0;
}