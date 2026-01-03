#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int m;

    cin >> s >> m;

    string expanded = "";

    for (int i = 0; i < s.size(); i++)
    {
        char currentChar = s[i];

        if (i + 1 < s.size() && isdigit(s[i + 1]))
        {
            int count = s[i + 1] - '0';

            for (int j = 0; j < count; j++)
            {
                expanded += currentChar;
            }

            i++;
        }
        else
        {
            expanded += currentChar;
        }
    }

    cout << expanded[m - 1];

    return 0;
}