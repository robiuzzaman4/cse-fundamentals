#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    stringstream ss(s);
    string item;
    int sum = 0;

    while (getline(ss, item, ','))
    {
        sum += stoll(item);
    }

    cout << sum << endl;

    return 0;
}
