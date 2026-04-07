#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;

    long long int expected_sum = n * (n + 1) / 2;
    long long int current_sum = 0;

    for (int i = 0; i < n - 1; i++)
    {
        long long int x;
        cin >> x;
        current_sum += x;
    }

    long long int missing_number = expected_sum - current_sum;
    cout << missing_number;

    return 0;
}