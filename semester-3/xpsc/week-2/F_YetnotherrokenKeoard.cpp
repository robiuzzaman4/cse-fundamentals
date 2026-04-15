#include <bits/stdc++.h>
using namespace std;

void solve()
{
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        string res = "";
        int lower_to_skip = 0;
        int upper_to_skip = 0;

        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] == 'b')
            {
                lower_to_skip++;
            }
            else if (s[i] == 'B')
            {
                upper_to_skip++;
            }
            else
            {
                if (islower(s[i]))
                {
                    if (lower_to_skip > 0)
                        lower_to_skip--;
                    else
                        res += s[i];
                }
                else
                {
                    if (upper_to_skip > 0)
                        upper_to_skip--;
                    else
                        res += s[i];
                }
            }
        }

        reverse(res.begin(), res.end());
        cout << res << "\n";
    }
    return 0;
}