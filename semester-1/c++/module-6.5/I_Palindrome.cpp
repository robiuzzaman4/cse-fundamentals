#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    string reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end());

    if (str == reversedStr)
    {
        cout << "YES";
    }
    else
    {

        cout << "NO";
    }

    return 0;
}