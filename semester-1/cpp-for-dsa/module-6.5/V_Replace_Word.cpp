#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string target = "EGYPT";
    string result;

    for (int i = 0; i < s.size();)
    {
        if (s.substr(i, target.size()) == target)
        {
            result.push_back(' ');
            i += target.size();
        }
        else
        {
            result.push_back(s[i]);
            i++;
        }
    }

    cout << result;
    return 0;
}
