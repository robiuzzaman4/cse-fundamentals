#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    multiset<int> ms;

    // === insert ===
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ms.insert(x);
    }

    // auto it = s.begin();
    // it++;
    // it++;
    // it++;
    // cout << *it << "\n";

    // === print with loop ===
    // for (auto val : s)
    //     cout << val << " ";

    // === erase ===
    ms.erase(5);

    // === find ===
    auto it = ms.find(5);
    if (it != ms.end())
        cout << "Found \n";
    else
        cout << "Not Found \n";

    // === count ===
    cout << ms.count(5) << "\n";

    return 0;
}