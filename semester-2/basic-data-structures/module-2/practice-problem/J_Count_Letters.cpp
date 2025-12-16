#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<int> v(26, 0);

    for (char c : s)
    {
        char index = c - 'a';
        v[index]++;
    }

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > 0)
        {
            char l = i + 'a';
            cout << l << " : " << v[i] << endl;
        }
    }

    return 0;
}