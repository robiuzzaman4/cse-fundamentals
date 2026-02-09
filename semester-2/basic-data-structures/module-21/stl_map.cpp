#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;

    mp["hia"] = 145;
    mp["ruhan"] = 120;
    mp["ru"] = 160;
    mp["taahia"] = 120;

    for (auto it = mp.begin(); it != mp.end(); it++)
        cout << it->first << " " << it->second << endl;

    return 0;
}