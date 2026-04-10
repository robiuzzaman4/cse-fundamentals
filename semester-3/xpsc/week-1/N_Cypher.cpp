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

        int final_moves[n];
        for (int i = 0; i < n; i++)
        {
            cin >> final_moves[i];
        }

        for (int i = 0; i < n; i++)
        {
            int num_moves;
            cin >> num_moves;
            string s;
            cin >> s;

            for (int j = 0; j < num_moves; j++)
            {
                if (s[j] == 'U')
                    final_moves[i]--;
                else if (s[j] == 'D')
                    final_moves[i]++;
            }

            final_moves[i] = (final_moves[i] % 10 + 10) % 10;
        }

        for (int i = 0; i < n; i++)
        {
            cout << final_moves[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}