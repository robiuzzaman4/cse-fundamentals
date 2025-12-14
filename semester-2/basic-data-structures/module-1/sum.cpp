#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 0;

    // using loop
    for (int i = 0; i < n; i++)
    {
        sum += i;
    }

    // using formula
    sum = (n * (n + 1)) / 2;

    return 0;
}

// 1_1 Why we need to learn time complexity
