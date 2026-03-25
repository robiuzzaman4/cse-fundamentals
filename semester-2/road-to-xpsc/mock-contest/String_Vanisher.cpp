#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;

//         cout << (n / 2) + 1 << endl;
//     }
//     return 0;
// }

// alternative
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;

//         int operations = 0;
//         int current_length = n;

//         while (current_length > 0)
//         {
//             int removed = (current_length + 1) / 2;
//             current_length -= removed;
//             operations++;
//         }

//         cout << operations << endl;
//     }
//     return 0;
// }

// alternative
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

        int operations = 0;

        // Keep going until the string is totally erased
        while (!s.empty())
        {
            string remaining = "";

            // We 'erase' characters at index 0, 2, 4... (the non-adjacent ones)
            // So we only keep characters at index 1, 3, 5...
            for (int i = 1; i < s.length(); i += 2)
            {
                remaining += s[i];
            }

            // The string 'merges' in its original order
            s = remaining;
            operations++;
        }

        cout << operations << endl;
    }
    return 0;
}