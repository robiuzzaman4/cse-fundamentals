#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 2, 5, 6, 2, 4, 7, 8, 9, 10};
    vector<int> v2 = {10, 20, 30};

    // v.pop_back();
    // v.push_back(10);

    // v.insert(v.begin() + 2, v2.begin(), v2.end());
    // v.insert(v.begin() + 2, 100);

    // v.erase(v.begin(), v.begin() + 5);

    replace(v.begin(), v.end(), 2, 200);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}