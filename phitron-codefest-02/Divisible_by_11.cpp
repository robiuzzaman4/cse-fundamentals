#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int odd_sum = 0;
    int even_sum = 0;

    for (int i = 0; i < s.size(); i++)
    {
        int digit = s[i] - '0';

        if ((i + 1) % 2 != 0)
        {
            odd_sum += digit;
        }
        else
        {
            even_sum += digit;
        }
    }

    int diff = abs(odd_sum - even_sum);

    if (diff % 11 == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}