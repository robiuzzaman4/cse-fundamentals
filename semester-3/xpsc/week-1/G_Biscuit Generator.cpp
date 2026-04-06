#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, t;
    cin >> a >> b >> t;
    float total_time = t + 0.5;

    if (a == total_time)
    {
        cout << b;
        return 0;
    }

    int div = total_time / a;
    int total_biscuits = div * b;

    cout << total_biscuits;

    return 0;
}