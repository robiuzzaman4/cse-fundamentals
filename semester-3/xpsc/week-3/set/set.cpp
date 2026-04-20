#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    set<int> s;

    // === insert ===
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
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
    s.erase(5);

    // === find ===
    auto it = s.find(5);
    if (it != s.end())
        cout << "Found \n";
    else
        cout << "Not Found \n";

    // === count ===
    cout << s.count(5) << "\n";

    return 0;
}