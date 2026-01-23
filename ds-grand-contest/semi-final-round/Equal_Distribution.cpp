#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, k;
    cin >> n >> k;

    long long int received = k / n;
    long long int remain = 0;

    if (k > (received * n))
    {
        remain = k - (received * n);
    }

    cout << received << " " << remain;

    return 0;
}