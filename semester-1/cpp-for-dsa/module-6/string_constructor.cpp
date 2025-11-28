#include <bits/stdc++.h>
using namespace std;

int main()
{
    // string s = "ruhan zaman";
    // string s("ruhan zaman");
    // string s("ruhan zaman", 5); will take 1st 5 char and then remove rest all
    string str = "ruhan zaman";
    string s(str, 6); // will remove 6 char from 'str'

    string t(5, 'T'); // will create 5 char string with 'T' like - TTTTT

    cout << t << endl;
    return 0;
}