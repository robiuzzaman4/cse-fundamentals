#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int len = s.size();

    char first_lower_char = s[0] + 32;
    string rest_s = s.substr(1);
    string new_lower_s = first_lower_char + rest_s;

    for (int i = len - 1; i >= 0; i--)
    {
        cout << new_lower_s[i];
    }

    return 0;
}