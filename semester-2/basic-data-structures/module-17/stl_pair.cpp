#include <bits/stdc++.h>
using namespace std;

int main()
{
    // pair<int, int> p;
    // p = make_pair(2, 3);

    // cout << p.first << endl;
    // cout << p.second << endl;

    // === vector pair ===
    int n;
    cin >> n;
    vector<pair<int, int>> p;

    for (int i = 0; i < 5; i++)
    {
       cin >> p[i].first >> p[i].second;
    }
    for (int i = 0; i < 5; i++)
    {
       cout << p[i].first << p[i].second;
    }
    

    return 0;
}