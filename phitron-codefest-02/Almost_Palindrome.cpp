#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;

        int str_len = str.length();

        string reversed_str = str;

        reverse(reversed_str.begin(), reversed_str.end());

        if (str == reversed_str)
        {
            cout << 0 << endl;
        }
        else
        {
            int result = 7 - str_len;
            cout << result << endl;
        }
    }

    return 0;
}

// h e l l o + e h (2)
// h e l o l e h
// h e l o l e h
// h e l o l e h

// a b c d  + c b a (3)

// a b c d c b a
// a b c d c b a

// e + m a d a m e (1)

// e m a d a m e
// e m a d a m e
