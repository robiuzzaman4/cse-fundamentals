#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;

    for (int i = 1; i <= sqrt(n); i++) // o(sqrt(n))
    {
        cout << i << " " << n/i << " ";
    }

    return 0;
}
