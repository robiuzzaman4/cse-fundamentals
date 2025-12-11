#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string code = "WECNITK";

    if (s == code)
    {
        cout << "Welcome to Web Club!";
    }
    else
    {
        cout << "Access denied";
    }
    return 0;
}