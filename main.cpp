#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(string s)
{
    int l = 0;
    int r = s.size() - 1;

    while (l <= r)
    {
        if (s[l] != s[r])
            return false;

        l++;
        r--;
    }
    return true;
}

int main()
{
    string s;
    cin >> s;

    bool result = is_palindrome(s);
    if (result)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}