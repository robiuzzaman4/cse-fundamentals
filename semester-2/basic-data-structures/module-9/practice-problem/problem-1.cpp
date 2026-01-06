#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> list_1;
    list<int> list_2;

    int val_1;
    while (true)
    {
        cin >> val_1;
        if (val_1 == -1)
        {
            break;
        }
        list_1.push_back(val_1);
    }

    int val_2;
    while (true)
    {
        cin >> val_2;
        if (val_2 == -1)
        {
            break;
        }
        list_2.push_back(val_2);
    }

    if (list_1 == list_2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}