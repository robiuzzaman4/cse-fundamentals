#include <bits/stdc++.h>
using namespace std;

void recur(int n)
{
    if (n > 5)
        return;

    cout << n << endl;
    recur(n + 1);
}

int sum(int n)
{
    if (n > 5)
        return 0;
    int sm = sum(n + 1);
    return sm + n;
}

int main()
{
    // recur(1);

    cout << sum(1) << endl;
    return 0;
}