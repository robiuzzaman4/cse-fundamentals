// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     long long int n;
//     cin >> n;

//     long long int sum = 0;
//     for (int i = 1; i <= n; i++) // O(N) => TLE
//     {
//         sum += i;
//     }

//     cout << sum;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;

    long long int sum = (n * (n + 1)) / 2; // O(1)

    cout << sum;

    return 0;
}