#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; // o(1)

    cin >> n; // o(1)

    for (int i = 0; i < n; i++) // o(n)
    {
        cout << i;
    }

    for (int i = 0; i < n / 2; i++) // o(n)
    {
        cout << i;
    }

    return 0; // o(1)


    // final complexity o(n+n) = o(2n) [rules: remove constrains] so result is o(n)
}
