#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {1, 2, 3, 4, 5};
    list<int> l2(l);

    int a[] = {10, 20, 30};
    list<int> list_with_array(a, a + 3);

    vector<int> v = {10, 20, 30};
    list<int> list_with_vector(v.begin(), v.end());

    for (int value : list_with_vector)
    {
        cout << value << endl;
    }

    return 0;
}