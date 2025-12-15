#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v; // type 1
    // vector<int> v(5);     // type 2
    // vector<int> v(10, 5); // type 3
    // for (int i = 1; i <= v.size(); i++)
    // {
    //     cout << i << " " << v[i] << endl;
    // }

    // vector<int> v(5);
    // vector<int> v2(v); // type 4

    // type 5
    // int a[5] = {10, 20, 30, 40, 50};
    // vector<int> v(a, a + 5);
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    // type 6
    vector<int> v = {10, 20, 30, 40, 50};

    cout << endl;
    // cout << "v.size = " << v.size();
    cout << "v.max_size = " << v.max_size();

    return 0;
}