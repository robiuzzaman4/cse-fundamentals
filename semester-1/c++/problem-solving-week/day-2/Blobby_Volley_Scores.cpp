#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        char server = 'A';
        int alice_score = 0;
        int bob_score = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'A' && server == 'A')
            {
                alice_score++;
            }
            else if (s[i] == 'A' && server == 'B')
            {
                server = 'A';
            }
            else if (s[i] == 'B' && server == 'B')
            {
                bob_score++;
            }
            else if (s[i] == 'B' && server == 'A')
            {
                server = 'B';
            }
        }

        cout << alice_score << " " << bob_score << endl;
    }
    return 0;
}