#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, customer_no = 1;
    cin >> n;
    set<pair<int, int>> s;
    multiset<pair<int, int>> ml;
    vector<int> ans;
    for (int i = 1; i <= n; i++)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int money;
            cin >> money;
            s.insert({customer_no, money});
            ml.insert({money, -customer_no});
            customer_no++;
        }
        else if (type == 2)
        {
            auto it = s.begin();
            int id = it->first;
            int money = it->second;

            ans.push_back(id);

            s.erase(it);
            ml.erase({money, -id});
        }
        else
        {
            auto it = ml.rbegin();
            int money = it->first;
            int neg_id = it->second;
            int id = -neg_id;

            ans.push_back(id);

            ml.erase(prev(ml.end()));
            s.erase({id, money});
        }
    }

    for (auto val : ans)
        cout << val << " ";

    return 0;
}