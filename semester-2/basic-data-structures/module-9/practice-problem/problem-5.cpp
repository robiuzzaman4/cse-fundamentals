#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> list;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        list.push_back(val);
    }

    list.sort();

    for (int n : list)
    {
        cout << n << " ";
    }

    return 0;
}