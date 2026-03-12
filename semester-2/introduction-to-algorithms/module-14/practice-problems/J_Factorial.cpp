#include <bits/stdc++.h>
using namespace std;

long long int fact(int n)
{
    if (n <= 2)
        return n;
    return n * fact(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << fact(n);
    return 0;
}

// 1 * 1
// 1 * 2
// 1 * 2 * 3
// 1 * 2 * 3 * 4
// 1 * 2 * 3 * 4 * 5

// [NOTE: Always use long long int for fact() return type]